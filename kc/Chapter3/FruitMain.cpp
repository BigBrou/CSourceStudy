#include <iostream>
#include "Fruit/FruitBuyer.h"
#include "Fruit/FruitSeller.h"

int main()
{
    Buyer::FruitBuyer buyer;
    Seller::FruitSeller seller;

    buyer.InitMembers(10000);
    seller.InitMembers(200, 50, 5000);

    buyer.BuyApples(seller, 3000);

    buyer.ShowBuyResult();
    seller.ShowSalesResult();

    return 0;
}

