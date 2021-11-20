#include <iostream>

int main()
{
    int mass[10] = {-2,1,-3,4,-1,2,1,-5,4,-3};
    int maxInd = 9;
    int minInd = 0;
    int max = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            int temp = 0;
            for (int k = i; k <= j; ++k) {
                temp += mass[k];
            }
            if (temp > max) {
                max = temp;
                maxInd = j;
                minInd = i;
            }
        }
    }
    std::cout << "Max =" << max << ", i =" << minInd << ", j =" << maxInd;
}
