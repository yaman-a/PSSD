#include <bits/stdc++.h>

using namespace std;

class SquareOfDigits {
    public:
    int getMax(vector<string> data) {
        int rows = data.size();
        int cols = data[0].size();
        int maxSize = 1;

        for (int size = min(rows, cols); size > 1; size--) {
            for (int r = 0; r <= rows - size; r++) {
                for (int c = 0; c <= cols - size; c++) {
                    char digit = data[r][c];
                    if (data[r][c + size - 1] == digit &&
                        data[r + size - 1][c] == digit &&
                        data[r + size - 1][c + size - 1] == digit) {
                        maxSize = max(maxSize, size);
                    }
                }
            }
        }

        return maxSize * maxSize;
    }
};