#include <iostream>
#include <string>
using namespace std;

int main() {
    float meters;
    cout<<"Введите количество метров: "; cin>>meters;
    cout<<""<<endl;
    float metersResult = meters / 1000;
    cout<<meters<<" метров будет "<<metersResult<<" киллометров"<<endl;
    return 0;
}