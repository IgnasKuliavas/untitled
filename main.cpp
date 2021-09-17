#include <iostream>
#include "Extern.h"
#include <string>
#include <sstream>
#include <utility>

void Input(Extern &ext);
void Calculation(Extern& ext);
unsigned short int Result();

int main() {
    Extern ext;
    Input(ext);
    Calculation(ext);

    return 0;
}

void Input(Extern &ext)
{
    std::string temp;

    getline(std::cin, temp);

    std::stringstream check1(temp);

    std::string intermediate;
    while(getline(check1, intermediate, ' ')) {
         ext.addCoin(stoi(intermediate));
    }

    if(ext.getCoins().size() <= 3 || ext.getCoins().size() >= 1000000)
        std::cout << "yes" << std::endl;

    if (ext.getCoins().size() % 3 != 0)
        std::cout << "no" << std::endl;

    for(int i = 0; i < ext.getCoins().size(); i++)
        if(ext.getCoins()[i] <= 1 || ext.getCoins()[i] >= 100000) {
            std::cout << "epic";
            break;
        }

}

void Calculation(Extern& ext)
{
    for(int i = 0; i < ext.getCoins().size(); i++)
        for(int j = i+1; j < ext.getCoins().size(); j++)
            if(ext.getCoins()[j] > ext.getCoins()[i])
                std::swap(ext.getCoins()[j], ext.getCoins()[i]);



}

unsigned short int Result()
{

    return 0;
}
