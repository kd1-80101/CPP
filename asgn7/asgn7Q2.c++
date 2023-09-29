#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    int product_id;
    string title;
    double price;

public:
    Product(int id, string t, double p)
    {
        this->product_id = id;
        this->title = t;
        this->price = p;
    }

    void apply_discount()
    {
    }

    
    void setProductID(int id)
    {
        product_id = id;
    }

    void setTitle(string &t)
    {
        title = t;
    }

    void setPrice(double p)
    {
        price = p;
    }

    
    int getProductID()
    {
        return product_id;
    }

    string getTitle()
    {
        return title;
    }

    double getPrice()
    {
        return price;
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book(int id, string &t, string &a, double p) : Product(id, t, p), author(a) {}

    void apply_discount() 
    {
        setPrice(getPrice() * 0.9); // 10% discount on books
    }

    
    void setAuthor(string &a)
    {
        author = a;
    }

    
    string getAuthor()
    {
        return author;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape(int id, string t, string ar, double p) : Product(id, t, p)
    {
        this->artist = ar;
    }

    void apply_discount() 
    {
        setPrice(getPrice() * 0.95); // 5% discount on tapes
    }

    
    void setArtist(string &ar)
    {
        artist = ar;
    }

    
    string getArtist()
    {
        return artist;
    }
};

void displayMenu()
{
    cout << "\nMenu:" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape" << endl;
    cout << "3. Calculate Final Bill" << endl;
    cout << "4. Quit" << endl;
}

int main()
{
    int MAX_PRODUCTS = 10;
    Product *products[MAX_PRODUCTS];
    int productCount = 0;
    double total_bill = 0.0;

    while (true)
    {
        displayMenu();
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        case 2:
        {
            if (productCount < MAX_PRODUCTS)
            {
                int product_id;
                string title, author_or_artist;
                double price;

                cout << "Enter product ID: ";
                cin >> product_id;
                cin.ignore();

                cout << "Enter " << (choice == 1 ? "book" : "tape") << " title: ";
                getline(cin, title);

                cout << "Enter " << (choice == 1 ? "author" : "artist") << ": ";
                getline(cin, author_or_artist);

                cout << "Enter price: ";
                cin >> price;

                if (choice == 1)
                {
                    Book *book = new Book(product_id, title, author_or_artist, price);
                    book->apply_discount();
                    products[productCount++] = book;
                    cout << "Book added to cart." << endl;
                }
                else
                {
                    Tape *tape = new Tape(product_id, title, author_or_artist, price);
                    tape->apply_discount();
                    products[productCount++] = tape;
                    cout << "Tape added to cart." << endl;
                }
            }
            else
            {
                cout << "Cart is full. Cannot add more products." << endl;
            }
            break;
        }

        case 3:
        {
            if (productCount < 3)
            {
                cout << "You must add at least 3 products to calculate the final bill." << endl;
            }
            else
            {
                total_bill = 0.0;
                for (int i = 0; i < productCount; ++i)
                {
                    total_bill += products[i]->getPrice();
                }
                cout << "Final bill: $" << total_bill << endl;
            }
            break;
        }

        case 4:
            for (int i = 0; i < productCount; ++i)
            {
                delete products[i];
            }
            return 0;

        default:
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
