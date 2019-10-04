#include "Formula.h"
#include <cmath>

Formula::Formula() {
    setEngineType("V6");
    setBrand("Custom");
    setModel("VTx");
}

Formula::Formula(string brand, string model, string fuelType, string engineType) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineType(engineType);
}

Formula::~Formula() = default;

string Formula::getEngineType() {
    return myFormulaEngType;
}

void Formula::setEngineType(string engineType) {
    myFormulaEngType = engineType;
}

double Formula::mileageEstimate(double time) {
    double mileage = 10*time;
    
    if(getEngineType() == "V8")
    {
        mileage += mileage * .08;
    }
    return floor(mileage);
}

string Formula::toString() {
    return "-> Formula\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
    getEngineType();
}