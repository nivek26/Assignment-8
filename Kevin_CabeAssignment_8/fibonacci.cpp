#include "fibonacci.h"
#include <iostream>

fibonacci::fibonacci()
{
}

void fibonacci::getSecquence(QList<int>list){
    list.push_back(0);
    list.push_back(1);

    for(int i = 0 ;i < 10;i++){
        if(i > 1) list.push_back((list[i-1])+ (list[i-2]));

        if(i >0) std::cout << list[i] << std::endl;
    }
}
