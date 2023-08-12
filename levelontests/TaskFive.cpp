#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y;
    cin>>x;
    cout<<"Введите 1 число: "; cin>>x;
    cout<<"\n";
    cout<<"Введите 2 число: "; cin>>y;

    if(x>y) {
        cout<<"БОЛЬШЕ"<<endl;
    } else if (x < y){
        cout<<"МЕНЬШЕ"<<endl;
    } else if (x == y) {
        cout<<"ЭТИ ЧИСЛА РАВНЫ"<<endl;
    }
    return 0;
}