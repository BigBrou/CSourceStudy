#ifndef CHAPTER3_FRUITSELLER_H
#define CHAPTER3_FRUITSELLER_H

namespace Seller
{
    class FruitSeller {
        private:
            int APPLE_PRICE = 100;
            int numOfApples;
            int myMoney;

        public:
            void InitMembers(int price, int num, int money);

            int SaleApples(int money);

            void ShowSalesResult();
    };
}

#endif //CHAPTER3_FRUITSELLER_H
