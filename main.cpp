#include <iostream>

#include "apple.h"

using namespace std;

int main() {
    cout << "Hello, World!\n";

    apple an_apple(10);

    uint32_t bites = 5;
    cout << "I " << (an_apple.bite(bites) ? "succeeded " : " failed ") << "at taking " << bites << " bites of my apple!\n";

    return 0;
}