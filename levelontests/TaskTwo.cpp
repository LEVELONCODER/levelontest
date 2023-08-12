#include <iostream>
#include <string>
using namespace std;

int main() {
    string letter;
    cout<<"Введите букву нижнего регистра:  "<<endl;
    cin>>letter;
    cout<<"\n";
    for(int i=0; i< letter.length(); i++) {
        letter[i] = toupper(letter[i]);
    }
    cout<<"Также буква верхнего регистра:  "<<letter<<endl;
    return 0;
}