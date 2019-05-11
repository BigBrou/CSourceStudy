#include "Destructor/Person.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    Person p1("kang", 30);
    p1.ShowPersonInfo();

    Person people[3];
    int peopleLength = sizeof(people) / sizeof(*people);

    for (int idx = 0; idx < peopleLength; idx++)
    {
        string dd = "test" + to_string(idx);
        char *name = new char[dd.length() + 1];
        strcpy(name, dd.c_str());

        people[idx].SetPerson(name, idx);
        people[idx].ShowPersonInfo();
    }

    return 0;
}

