//
// Created by s039217 on 9/16/2021.
//

#ifndef UNTITLED_EXTERN_H
#define UNTITLED_EXTERN_H
#include <vector>


class Extern {
private:
    std::vector<unsigned int> coins;

public:

    std::vector<unsigned int> & getCoins();

    void addCoin(unsigned int c);

    void setCoins(const std::vector<unsigned> &coins);

};


#endif //UNTITLED_EXTERN_H
