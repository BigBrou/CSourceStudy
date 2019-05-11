#include <iostream>
#include "FruitBuyer.h"

using namespace std;

namespace Buyer
{

    void FruitBuyer::InitMembers(int money) {
        myMoney = money;
        numOfApples = 0;
    }

    void FruitBuyer::BuyApples(Seller::FruitSeller &seller, int money) {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void FruitBuyer::ShowBuyResult() {
        cout << "Buyer" << endl;
        cout << myMoney << endl;
        cout << numOfApples << endl << endl;
    }
}