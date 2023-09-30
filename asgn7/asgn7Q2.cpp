#include <iostream>
using namespace std;

class Product
{
private:
    int product_id;
    string title;
    double price;

protected:
    char type;

public:
    Product()
    {
        this->product_id = 0;
        this->title = "";
        this->price = 0;
    }

    virtual void apply_discount() = 0;
    void acceptData()
    {
        cout << "Enter product ID: ";
        cin >> product_id;
        getchar();
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
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
    char getType()
    {
        return type;
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book() : Product()
    {
        this->type='B';
        this->author = "";
    }

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
    void acceptData()
    {
        Product::acceptData();
        getchar();
        cout << "Enter author: ";
        getline(cin, author);
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape() : Product()
    {
        this->type='T';
        this->artist = "";
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
    void acceptData()
    {
        Product::acceptData();
        cout << "Enter artist: ";
        getchar();
        getline(cin, artist);
    }
};

void displayMenu()
{
    cout << "------------------------------------" << endl;
    cout << "\nMenu:" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape" << endl;
    cout << "3. Calculate Final Bill" << endl;
    cout << "4. Quit" << endl;
    cout << "------------------------------------" << endl;
}

void Menu()
{
    cout << "------------------------------------" << endl;
    cout << "ENTER CHOICE" << endl;
    cout << "1. Calculate Book total " << endl;
    cout << "2. Calculate Tape total " << endl;
    cout << "3. Calculate Final Bill" << endl;
    cout << "------------------------------------" << endl;
}
void CalculateBill(int productCount, Product **products)
{
    int choice;
    Menu();
    cin >> choice;
    int total_bill = 0.0;
    int total_book_bill = 0.0;
    int total_tape_bill = 0.0;
    switch (choice)
    {
    case 1:
        for (int i = 0; i < productCount; ++i)
        {
            if (products[i]->getType() == 'B')
                total_book_bill = total_book_bill + products[i]->getPrice();
        }
        cout << "Final bookbill: $" << total_book_bill << endl;
        break;
    case 2:
        for (int i = 0; i < productCount; ++i)
        {
            if (products[i]->getType() == 'T')
                total_tape_bill =total_tape_bill + products[i]->getPrice();
        }
        cout << "Final tapebill: $" << total_tape_bill << endl;
        break;
    case 3:
        for (int i = 0; i < productCount; ++i)
        {
            total_bill += products[i]->getPrice();
        }
        cout << "Final bill: $" << total_bill << endl;

        break;

    default:
        cout << "INVALID CHOICE " << endl;
        break;
    }
}
int main()
{
    int MAX_PRODUCTS = 10;
    Product *products[MAX_PRODUCTS];
    int productCount = 0;

    while (true)
    {
        displayMenu();
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (productCount < MAX_PRODUCTS)
            {
                Book *book = new Book;
                book->acceptData();
                book->apply_discount();

                products[productCount++] = book;

                cout << "Book added to cart." << endl;
            }
            break;

        case 2:
        {
            if (productCount < MAX_PRODUCTS)
            {
                Tape *tape = new Tape();
                tape->acceptData();
                tape->apply_discount();
                products[productCount++] = tape;
                cout << "Tape added to cart." << endl;
            }
            else
            {
                cout << "Cart is full. Cannot add more products." << endl;
            }
            break;
        }

        case 3:
            CalculateBill(productCount, products);
            break;

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
