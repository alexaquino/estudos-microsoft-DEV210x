// Microsoft: DEV210x Introduction to C++ (edX)
//   Module 4 Functions and Objects
//     Functions Peer Review

#include <iostream>
using namespace std;

// avg function
float avg(int myarray[], int arrayLength) {
    int sum, size;
    float average;

    for(int i = 0; i < arrayLength; i++) {
        sum = sum + myarray[i];
    }
    average = sum / arrayLength;
    return average;
}

int main() {

    int arrayLength = 5;
    int myarray[arrayLength] = {1, 2, 3, 4, 5};

    // function call
    cout << "average of values: "<< avg(myarray, arrayLength) << endl;

}
