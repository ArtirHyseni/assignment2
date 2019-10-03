
#include "Skateboard.h"
#include <ctime>
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time1) {
    srand(time(0));
    double r, mileage, n;
    r = rand() % 5 + 1;
    mileage = r / 10;
    mileage = mileage * time1;
    if(time1 > 25 && time1 < 250)
    {
        int tempt = time1/3;
        n = rand() % tempt + 1;
        mileage += mileage * n;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
