#include <iostream>
#include <cmath>

int main()
{
    int array[6] = { -100,-50,-5,1,10,15 };
    int temp;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6 - (i + 1); ++j) {
            if (abs(array[j]) > abs(array[j + 1])) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 6; ++i) {
        std::cout << array[i] << ", ";
    }
}
