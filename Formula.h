//Create by Artir Hyseni on 10/03/19.

#ifndef DRIVINGSIMULATOR_FORMULA_H
#define DRIVINGSIMULATOR_FORMULA_H

#include "PoweredVehicle.h"

class Formula : public PoweredVehicle {
    
private:
    string myFormulaEngType;
    
public:
    Formula();
    
    explicit Formula(string brand, string model, string fuelType, string engineType);
    
    virtual ~Formula();
    string getEngineType();
    void setEngineType(string engineType);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_FORMULA_H