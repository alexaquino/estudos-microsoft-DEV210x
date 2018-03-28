// Microsoft: DEV210x Introduction to C++ (edX)
//   Module 4 Functions and Objects
//     Functions Peer Review

#include <iostream>
using namespace std;

// sine function
float Sin(float opposite, float hypotenuse) {
    float sine;
    sine = opposite / hypotenuse;
    return sine;
}

// pow function
int Pow(int base, int exponent) {
    float result;
    if (exponent == 0) {
        result = 1;
    } else {
        result = base;
        for (int i = 1; i < exponent; i++) {
            result = result * base;
        }
    }
    return result;
}

int main() {

    cout << "----------------- Functions -----------------" << endl;
    cout << "pow function result: " << Pow(2, 3) << endl;
    cout << "sine function result: " << Sin(10, 3) << endl;

}
