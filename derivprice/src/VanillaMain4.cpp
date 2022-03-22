#include <SimpleMC6.h>

#include <iostream>
using namespace std;
#include <Vanilla3.h>
int main() {
    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;
    cout << "\nEnter expiry\n";
    cin >> Expiry;
    cout << "\nStrike\n";
    cin >> Strike;
    cout << "\nEnter spot\n";
    cin >> Spot;
    cout << "\nEnter vol\n";
    cin >> Vol;
    cout << "\nr\n";
    cin >> r;
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;
    PayOffCall thePayOff(Strike);
    VanillaOption theOption(thePayOff, Expiry);
    ParametersConstant VolParam(Vol);
    ParametersConstant rParam(r);
    double result = SimpleMonteCarlo4(theOption,
                                      Spot,
                                      VolParam,
                                      rParam,
                                      NumberOfPaths);
    cout << "\nthe call price is " << result << "\n";
    double tmp;
    cin >> tmp;
    return 0;
}