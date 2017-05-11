#include "fibonacci.h"
#include <iostream>

fibonacci::fibonacci()
{

    QList<int>Secqunce;

    int num = 1;
    Secqunce.push_back(num);
    Secqunce.push_back(num);

    for(int x = 0; x < 10;x++){

        if(x > 1)
        num = (Secqunce.at(x-1) + (Secqunce.at(x)));

        Secqunce.push_back(num);
    }

    for (int x = 0; x <Secqunce.size();x++ ){
        std::cout << Secqunce.at(x);
    }
}
