#include <iostream>

int main()
{
    int mass[4] = {2,7,11,15};
    int result = 9;
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if ((mass[i] + mass[j]) == result) std::cout << "Number1 = " << mass[i] << ", number2 = " << mass[j];
        }
    }
}
