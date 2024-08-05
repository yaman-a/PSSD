#include "ThrowTheBall.hpp"

int main() {
    ThrowTheBall T;


    cout << T.timesThrown(5,3,2) << endl;
    cout << T.timesThrown(4, 1, 3) << endl;
    cout << T.timesThrown(10, 3, 5) << endl;
    cout << T.timesThrown(15, 4, 9) << endl;

    return 0;
}