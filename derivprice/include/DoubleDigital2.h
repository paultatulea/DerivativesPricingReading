#ifndef DOUBLEDIGITAL2_H
#define DOUBLEDIGITAL2_H
#include "Payoff3.h"

class PayOffDoubleDigital : public PayOff {
   public:
    PayOffDoubleDigital(double LowerLevel_,
                        double UpperLevel_);
    virtual double operator()(double Spot) const;
    virtual PayOff* clone() const;
    virtual ~PayOffDoubleDigital() {}

   private:
    double LowerLevel;
    double UpperLevel;
};

#endif