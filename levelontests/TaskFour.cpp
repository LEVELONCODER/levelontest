#include <iostream>
#include <string>
using namespace std;

int main() {
    string symbol = "*";
    for (int i = 1; i < 7; i++) {
        for (int j = 0; j < i; j++) {
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}