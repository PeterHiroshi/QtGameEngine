#include "ShopBehaviorNoCost.h"

bool ShopBehaviorNoCost::buy(Item *item, Inventory *buyer, Inventory *seller)
{
    // simply allow purchase (don't transfer anything from buyer to seller)
    return true;
}
