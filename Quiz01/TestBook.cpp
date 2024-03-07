#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

int main()
{
    string name;
    double price;

    cout << "Enter name of Book : ";
    getline(cin, name);
    cout << "Enter price : ";
    cin >> price;

    Book book1(name, price);

    cout << "Call to print before validate :- " << endl;
    book1.print(book1.getName(), book1.getPrice());

    cout << "Call to print after validate :- " << endl;
    book1.validate(book1.getName(), book1.getPrice());
    book1.print(book1.getName(), book1.getPrice());
}
