#include "Person.h"
#include <iostream>
#include <cstring>

using namespace std;

Person::Person() {

}

Person::Person(char *names, int ages) : age(ages) {
    int len = strlen(names) + 1;
    name = new char[len];
    strcpy(name, names);
}

void Person::ShowPersonInfo() {
    cout << name << endl;
    cout << age << endl;
}

Person::~Person() {
    delete []name;
    cout << "destructor executed" << endl;
}

void Person::SetPerson(char *names, int ages) {
    int len = strlen(names) + 1;
    name = new char[len];
    strcpy(name, names);
    age = ages;
}
