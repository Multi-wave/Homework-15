#include <iostream>
#include <vector>
using namespace std;

void sorting( vector <int> array) {
    int temp;
    for (int i = 0; i < array.size(); ++i) {
        for (int j = 0; j < array.size() - (i + 1); ++j) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << array[4] << endl;
}

int main(){
    int number;
    vector <int> array;
    do {
        cout << "Enter a number: ";
        cin >> number;
        if (number == -1) sorting(array);
        else array.push_back(number);    
    } while (number != -2); 
}