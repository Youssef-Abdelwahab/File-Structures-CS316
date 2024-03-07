#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string getName();
    int getAge();
    string getCountry();
    void setName(string newName);
    void setAge(int newAge);
    void setCountry(string newCountry);
    Person(string name, int age, string country);

private:
    string name;
    int age;
    string country;
};
