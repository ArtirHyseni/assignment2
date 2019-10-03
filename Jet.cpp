// create by Artir Hyseni 10/03/19

#include "Jet.hpp"

Jet::Jet()
{
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("AF-1");
}

Jet::Jet(string brand, string model, string fuelType, int numOfEng)
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumEng(numOfEng);
}

Jet::~Jet() = default;

int Jet::getNumEng()
{
    return numberOfEngines;
}

void Jet::setNumEng(int numOfEng)
{
    numberOfEngines = numOfEng;
}
double Jet::mileageEstimate(double time1)
{
    double mileage;
    
    srand(time(0));
    
    mileage = rand() % 61 + 40;
    mileage = mileage * time1;
    if(getNumEng() > 2 && fuelType == "Rocket")
    {
        mileage += mileage * .055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
    to_string(numberOfEngines);
}
