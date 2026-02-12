#include <iostream>
#include "MiniVector.hpp"
//all code in main is for testing, can be easily changed to any value
int main()
{
    MiniVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.remove(1);
    v[0] = 50;
    for(int i = 0; i < 3; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}