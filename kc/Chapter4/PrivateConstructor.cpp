#include "Constructor/AAA.h"

int main(){
    AAA base;
    base.ShowNum();

    AAA &a1 = base.CreateInitObj(5);
    a1.ShowNum();

    AAA &a2 = base.CreateInitObj(10);
    a2.ShowNum();

    delete &a1;
    delete &a2;

    return 0;
}
