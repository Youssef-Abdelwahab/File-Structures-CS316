#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    Book(string, double);
    string getName() const;
    double getPrice() const;
    void setName(string);
    void setPrice(double);
    void validate(string name, double price);
    void print(string name, double price) const;

private:
    string name;
    double price;
};
