#include "SquareOfDigits.hpp"

int main() {
    SquareOfDigits s;
    cout << s.getMax({"12", "34"}) << endl;
    cout << s.getMax({"1255", "3455"}) << endl;
    cout << s.getMax({"42101", "22100", "22101"}) << endl;
    cout << s.getMax({"1234567890"}) << endl;
    cout << s.getMax({
        "9785409507",
        "2055103694",
        "0861396761",
        "3073207669",
        "1233049493",
        "2300248968",
        "9769239548",
        "7984130001",
        "1670020095",
        "8894239889",
        "4053971072"
    }) << endl;

    return 0;
}
