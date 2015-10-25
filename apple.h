//
// Created by Gato on 10/24/2015.
//

#ifndef TEST_SYNC_APPLE_H
#define TEST_SYNC_APPLE_H

#include <stdint.h>

class apple {
public:
    apple(uint32_t bites);
    bool bite(uint32_t bites);

private:
    uint32_t bites_;
};


#endif //TEST_SYNC_APPLE_H
