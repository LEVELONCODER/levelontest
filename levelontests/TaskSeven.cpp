#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout<<"Введите N: "; cin>>x;
    cout<<endl;
    cout<<"Введите степень K: "<<endl; cin>>y;
    int result = pow(x, y);
    cout<<"Сумма: "<<result<<endl;
    return 0;
}