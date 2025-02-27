#include<iostream>
using namespace std;
int globle=5;
void sum()
{
    cout<<globle;
}
int main()
{
    int glo=10;
    glo=12;
    globle=7;
    sum();
    cout<<glo;
    return 0;
}