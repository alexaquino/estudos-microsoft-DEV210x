// Microsoft: DEV210x Introduction to C++ (edX)
//   Module 3 Control Statements
//     Control statement Peer Review

#include <iostream>
using namespace std;

int main() {

    char response;

    cout << "--------------- switch statement ---------------" << endl;
    cout << "Please enter your choice (y, Y, n, N): " << flush;
    cin >> response;

    switch(response) {
        case 'y':
            cout << "  You chose: y" << endl;
            break;
        case 'Y':
            cout << "  You chose: Y" << endl;
            break;
        case 'n':
            cout << "  You chose: n"<< endl;
            break;
        case 'N':
            cout << "  You chose: N" << endl;
            break;
        default:
            cout << "  You didn't choose a valid option" << endl;
            break;
    }

    cout << "------------------------------------------------" << endl;

}
