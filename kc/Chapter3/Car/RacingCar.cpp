#include <iostream>

using namespace std;

namespace RacingCar {

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

    struct Car {
        char gamerID[ID_LEN];
        int fuelGauge;
        int curSpeed;

        void ShowCarState();

        void Accel();

        void Break();
    };

    void Car::ShowCarState() {
        cout << "user " << gamerID << endl;
        cout << "fuel " << fuelGauge << endl;
        cout << "speed " << curSpeed << endl;
    }

    void Car::Accel() {
        if (fuelGauge <= 0)
            return;
        else
            fuelGauge -= FUEL_STEP;

        if (curSpeed + ACC_STEP >= MAX_SPD)
            curSpeed = MAX_SPD;
        else
            curSpeed += ACC_STEP;
    }

    void Car::Break() {
        if (curSpeed <= BRK_STEP) {
            curSpeed = 0;
            return;
        }

        curSpeed -= BRK_STEP;
    }

    int main() {
        Car run99 = {"run99", 100, 0};
        run99.ShowCarState();

        run99.Accel();
        run99.ShowCarState();

        run99.Break();
        run99.ShowCarState();
        return 0;
    }
}