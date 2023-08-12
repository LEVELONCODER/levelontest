#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    double milkPrice = 1;
    double chocolatePrice = 1;
    double coffeePrice = 2;

    int milk = 2;
    int chocolate = 1;
    int coffee = 3;

    int result = 0;
    result = (milk * milkPrice + chocolate * chocolatePrice + coffee * coffeePrice);

    cout<<"Итоговая цена: "<<result<<endl;

    return 0;
}