#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int abc,cba;
    cout<<"abc=";
    cin>>abc;
    cba=(abc%10)*100+(abc%100/10)*10+(abc/100);
    cout<<"cba="<<cba;
}
