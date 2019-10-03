
//Create by Artir Hyseni on 10/03/19.

#ifndef DRIVINGSIMULATOR_CAR_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"
#include <ctime>
#include <cstdlib>

class Jet : public PoweredVehicle {
private:
    int numberOfEngines;
    
public:
    Jet();

    explicit Jet(string brand, string model, string fuelType, int 	numOfEng);
    virtual ~Jet();
    int getNumEng();
    void setNumEng(int numOfEng);
    virtual double mileageEstimate(double time1);
    virtual string toString();
    
};

#endif //DRIVINGSIMULATOR_CAR_H