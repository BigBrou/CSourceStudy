#ifndef CHAPTER3_FRUITBUYER_H
#define CHAPTER3_FRUITBUYER_H
#include "FruitSeller.h"

namespace Buyer
{
    class FruitBuyer {
        private:
            int myMoney;
            int numOfApples;

        public:
            void InitMembers(int money);

            void BuyApples(Seller::FruitSeller &seller, int money);

            void ShowBuyResult();
    };
}

#endif //CHAPTER3_FRUITBUYER_H
