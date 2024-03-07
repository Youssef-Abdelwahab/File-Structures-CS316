#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(string name, int age, string country){
    name = name;
    age = age;
    country = country;
}

string Person::getName(){
    return name;
}

int Person::getAge(){
    return age;
}

string Person::getCountry(){
    return country;
}

void Person::setName(string newName){
    name = newName;
}

void Person::setAge(int newAge){
    age = newAge;
}

void Person::setCountry(string newCountry){
    country = newCountry;
}
