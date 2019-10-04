
//Create by Artir Hyseni on 10/03/19.

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"


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

#endif //DRIVINGSIMULATOR_JET_H