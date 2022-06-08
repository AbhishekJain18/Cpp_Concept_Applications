#include<iostream>
using namespace std;

#define MAX 10

int main()
{
    typedef int NUMBER;
    typedef char LETTER;
    typedef const int * CPTR;

    NUMBER no = 11;
    LETTER ch = 'A';

    cout<<sizeof(no)<<"\n";
    cout<<no<<"\n";

    cout<<sizeof(ch)<<"\n";
    cout<<ch<<"\n";

    //const int *p = &no;
    CPTR p = &no;
    cout<<*p;

    return 0;
 }