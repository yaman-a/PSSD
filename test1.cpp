#include "week3/Arrows/Arrows.hpp"

int main() {
    Arrows A;

    cout << A.longestArrow("<--->--==>") << endl;
    cout << A.longestArrow("<<<<<<<<<<") << endl;
    cout << A.longestArrow("----==-") << endl;
    cout << A.longestArrow("<----=====>") << endl;

    return 0;
}