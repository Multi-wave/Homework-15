#include <iostream>

int main() {
    int mass[10] = { -2,1,-3,4,-1,2,1,-5,4,-3 };
    int temp = mass[0];
    int sum = 0;
    int minInd = 0;
    int maxInd = 0;
    int minusPos = -1;
    for (int i = 0; i < 10; ++i) {
        sum += mass[i];
        if (sum > temp) {
            temp = sum;
            minInd = minusPos + 1;
            maxInd = i;
        }
        if (sum < 0) {
            sum = 0;
            minusPos = i;
        }
    }
    std::cout << "i =" << minInd << ", j =" << maxInd;
}

