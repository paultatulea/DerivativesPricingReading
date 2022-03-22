#ifndef SIMPLEMC6_H
#define SIMPLEMC6_H
#include "Parameters.h"
#include "Vanilla3.h"

double SimpleMonteCarlo4(const VanillaOption& TheOption,
                         double Spot,
                         const Parameters& Vol,
                         const Parameters& r,
                         unsigned long NumberOfPaths);
#endif