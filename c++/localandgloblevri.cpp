#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    glo=7;
    cout<<glo;
}
int main()
{
    int glo=9;
    glo=78;
    sum();
    cout<<glo;
    return 0;
}