#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

Book::Book(string n, double p) : name(n), price(p){}

string Book::getName() const{
    return name;
}

double Book::getPrice() const{
    return price;
}

void Book::setName(string newName){
    name = newName;
}

void Book::setPrice(double newPrice){
    price = newPrice;
}

void Book::validate(string n, double p){
    if(n.size() > 10){
        name = n.substr(0, 10);
    } else {
        name = n;
    }
    if(p < 0){
        price = 0;
    } else {
        price = p;
    }
}

void Book::print(string name, double price) const{
    cout << "\tname of Book : " << name << endl;
    cout << "\tprice : " << price << endl;
}
