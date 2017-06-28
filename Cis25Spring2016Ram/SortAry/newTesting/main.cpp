
#include <iostream>
using namespace std;

int main() {
    
    int temp = 0;
    int arry[5] = {9,4,2,0,1};
    int size = 5;
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arry[i] > arry[j]) {
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
        cout << arry[i] << endl;
    }
}
