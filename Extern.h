//
// Created by s039217 on 9/16/2021.
//

#ifndef UNTITLED_EXTERN_H
#define UNTITLED_EXTERN_H
#include <vector>


class Extern {
private:
    std::vector<unsigned short int> coins;

public:

    const std::vector<unsigned short> &getCoins() const;

    void addCoin(unsigned short int c);

    void setCoins(const std::vector<unsigned short> &coins);

};


#endif //UNTITLED_EXTERN_H
