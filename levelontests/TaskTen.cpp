#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int cups = 6;
    int spoons = cups;
    int saucers = cups;

    if(spoons != cups or saucers != spoons) {
        cout<<"Количество не равно"<<endl;
    } else {
        cout<<cups<<endl;
        cout<<spoons<<endl;
        cout<<saucers<<endl;
    }
}