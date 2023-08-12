#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, f;
    cout<<"Введите цифры a, b и f: "<<endl;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"f="; cin>>f;
    cout<<"Вычисляем по формуле:  x = (а + b — f / а) + f * a * a — (a + b)"<<endl;
    int result;
    result =   (a + b - f / a) + f * a * a - (a + b);
    cout<<"x="<<result<<endl;
    return 0;
}