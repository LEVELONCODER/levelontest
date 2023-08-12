#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y, z;
    int a = 5;
    cout<<"Введите 1 число: "<<endl;
    cin>>x;
    cout<<"\n";
    cout<<"Введите 2 число: "<<endl;
    cin>>y;
    cout<<"\n";
    cout<<"Введите 3 число: "<<endl;
    cin>>z;
    cout<<endl;
    if(x == y && x == z && y == z) {
        cout<<"1 число = "<<x+a<<endl;
        cout<<"2 число = "<<y+a<<endl;
        cout<<"3 число = "<<z+a<<endl;
    } else {
        cout<<"равных нет"<<endl;
    }
    return 0;
}