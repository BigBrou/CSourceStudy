#ifndef CHAPTER4_PERSON_H
#define CHAPTER4_PERSON_H


class Person {
private:
    char *name;
    int age;
public:
    Person();
    Person(char *names, int ages);

    void SetPerson(char *names, int ages);
    void ShowPersonInfo();

    ~Person();
};


#endif //CHAPTER4_PERSON_H
