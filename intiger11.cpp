#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d,sum,hosil;
    cout<<"a=";
    cin>>a;
    b=a%10;
    c=a%100/10;
    d=a/10;
    sum=b+c+d;
    cout<<"sum="<<sum<<endl;
    hosil=b*c*d;
    cout<<"hosil="<<hosil;
}
