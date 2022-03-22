#include <iostream>

#include "DoubleDigital.h"
#include "SimpleMC2.h"

using namespace std;

int main() {
    double Expiry;
    double Low, Up;
    double Spot;

    double Vol;
    double r;
    unsigned long NumberOfPaths;
    cout << "\nEnter expiry\n";
    cin >> Expiry;
    cout << "\nEnter low barrier\n";
    cin >> Low;
    cout << "\nEnter up barrier\n";
    cin >> Up;
    cout << "\nEnter spot\n";
    cin >> Spot;
    cout << "\nEnter vol\n";
    cin >> Vol;
    cout << "\nr\n";
    cin >> r;
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;
    PayOffDoubleDigital thePayOff(Low, Up);

    double result = SimpleMonteCarlo2(thePayOff,
                                      Expiry,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths);
    cout << "\nthe price is " << result << "\n";
    double tmp;
    cin >> tmp;
    return 0;
}