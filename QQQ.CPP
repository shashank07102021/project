#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"A="<<a;
    cout<<"B="<<b;
}