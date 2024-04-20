#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int abc,dfg,a,b,c;
    cout<<"abc=";
    cin>>abc;
    a=abc/100;
    b=(abc/10)%10;
    c=abc%10;
    dfg=b*100+a*10+c;
    cout<<"dfg="<<dfg;
}
