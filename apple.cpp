//
// Created by Gato on 10/24/2015.
//

#include "apple.h"

apple::apple(uint32_t bites) : bites_(bites)
{

}

bool apple::bite(uint32_t bites)
{
    if(bites <= bites_)
    {
        bites_ -= bites;
        return true;
    }

    bites_ = 0;
    return false;
}