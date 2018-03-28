// Microsoft: DEV210x Introduction to C++ (edX)
//   Module 3 Control Statements
//     Control statement Peer Review

#include <iostream>
using namespace std;

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

    int base;
    int exponent;

    cout << "--------------- Exponentiation ---------------" << endl;
    cout << "Please enter a base: " << flush;
    cin >> base;
    cout << "Please enter a exponent: " << flush;
    cin >> exponent;

    cout << "----------------------------------------------" << endl;
    cout << "- RESULT: " << Pow(base, exponent) << endl;
    cout << "----------------------------------------------" << endl;

}
