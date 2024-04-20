#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int abc,dfg;
    cout<<"abc=";
    cin>>abc;
    dfg=(abc%10)*100+(abc/100)*10+(abc%100/10);
    cout<<"dfg="<<dfg;
}
