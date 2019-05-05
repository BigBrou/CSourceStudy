#include <iostream>
using namespace std;

int main(void)
{   
    int num = 12;
    int *ptr = &num;  // pointer variable, &num returns num address (not reference) 
    int **dptr = &ptr; // pointer variable of pointer, &ptr returns ptr address

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout<<&num<<endl;
    cout<<&ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;

    return 0;
}