#include<iostream>

using namespace std;

int main() {

    int x, y;
    
    x = 44;
    y = 96; 
    
    int nums[5] = {1, 2, 3, x, y};

    for (int i = 0; i<5; i++) {
        cout << nums[i] << endl;
    }
    return 0;
} 