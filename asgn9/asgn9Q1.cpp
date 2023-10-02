#include <iostream>
using namespace std;
long factorial(int n);
int main()
{
    int fact, value;
    cout << "Enter any number: ";
    cin >> value;
    try
    {
        fact = factorial(value);
        cout << "Factorial of a number is: " << fact << endl;
    }
    catch (int error)
    {
        cout << "Input must be a non-negative integer." << endl;
    }
    return 0;
}
long factorial(int n)
{
    if (n < 0)
    {
        throw 1;
    }

    long result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}
