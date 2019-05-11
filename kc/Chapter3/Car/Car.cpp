#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;


namespace CAR_CLASS
{
    void Car::InitMembers(char *ID, int fuel)
    {
        strcpy(gamerID, ID);
        fuelGauge = fuel;
        curSpeed = 0;
    }

    void Car::ShowCarState()
    {
        cout << gamerID << endl;
        cout << fuelGauge << endl;
        cout << curSpeed << endl;
    }

    void Car::Accel()
    {
        if (fuelGauge <= 0)
            return;
        else
            fuelGauge -= CAR_CONST::FUEL_STEP;

        if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPEED)
            curSpeed = CAR_CONST::MAX_SPEED;
        else
            curSpeed += CAR_CONST::ACC_STEP;
    }

    void Car::Break()
    {
        if (curSpeed <= CAR_CONST::BRK_STEP) {
            curSpeed = 0;
            return;
        }

        curSpeed -= CAR_CONST::BRK_STEP;
    }
}