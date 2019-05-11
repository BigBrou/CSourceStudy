#ifndef CHAPTER3_CAR_H
#define CHAPTER3_CAR_H

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPEED = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

namespace CAR_CLASS
{
    class Car
    {
        private:
            char gamerID[CAR_CONST::ID_LEN];
            int fuelGauge;
            int curSpeed;

        public:
            void InitMembers(char *ID, int fuel);

            void ShowCarState();

            void Accel();

            void Break();
    };
}


#endif //CHAPTER3_CAR_H
