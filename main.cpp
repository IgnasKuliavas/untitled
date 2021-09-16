#include <iostream>
#include "Extern.h"
#include <string>
#include <vector>

void Input(Extern ext);
void Calculation();
unsigned short int Result();

int main() {
    Extern ext;
    Input(ext);

    return 0;
}

void Input(Extern ext)
{

    std::vector<std::string> words{};

    size_t pos = 0;



    std::string temp;
    getline(std::cin, temp);
    std::cout << temp;


    std::stringstream tekstas(temp);
    std::string word;
    while (tekstas >> word) {
        std::cout << word << std::endl;
    }



//    while((pos = temp.find(" ")) != std::string::npos){
//        words.push_back(temp.substr(0, pos));
//        temp.erase(0, pos + strlen(" "));
////    }
//    for (auto it: words) {
//        std::cout << it << std::endl;
//    }



}

void Calculation()
{

}

unsigned short int Result()
{

    return 0;
}
