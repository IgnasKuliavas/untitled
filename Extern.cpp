//
// Created by s039217 on 9/16/2021.
//

#include "Extern.h"
#include <vector>

const std::vector<unsigned short int> &Extern::getCoins() const {
    return coins;
}

void Extern::setCoins(const std::vector<unsigned short> &coins) {
    Extern::coins = coins;
}

void Extern::addCoin(unsigned short int c) {
    coins.push_back(c);
}
