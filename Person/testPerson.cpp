#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
    string name;
    int age;
    string country;

    cout << "Enter person's name : ";
    getline(cin, name);
    //cin >> name;
    cout << "Enter person's age : ";
    cin >> age;
    cout << "Enter person's country : ";
    //getline(cin, country);
    cin >> country;

    Person person1(name, age, country);
    cout << "\nperson's name : " << name << ",\nperson's age : " << age
    << ",\nperson's country : " << country << "." << endl;
}
