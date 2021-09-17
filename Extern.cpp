//
// Created by s039217 on 9/16/2021.
//

#include "Extern.h"
#include <vector>

std::vector<unsigned int> &Extern::getCoins() {
    return coins;
}

void Extern::setCoins(const std::vector<unsigned > &coins) {
    Extern::coins = coins;
}

void Extern::addCoin(unsigned int c) {
    coins.push_back(c);
}
