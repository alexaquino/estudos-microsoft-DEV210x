// Microsoft: DEV210x Introduction to C++ (edX)
//   Introduction to C++
//   Complex Types Peer Review

#include <iostream>
using namespace std;

int main() {

    int arrayLength = 10;
    int myArray[arrayLength] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

    cout << "myArray: ";

    for(int i = 0; i < arrayLength; i++) {
        cout << myArray[i];
    }

}
