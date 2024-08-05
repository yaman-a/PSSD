#include <bits/stdc++.h>

using namespace std;

class StreetParking {
    public:
    int freeParks(string street) {
        int n = street.size();
        vector<bool> invalid(n, false);

        for (int i = 0; i < n; i++) {
            if (street[i] == 'D') {
                invalid[i] = true;
            } else if (street[i] == 'B') {
                invalid[i] = true;
                if (i >= 1) {
                    invalid[i - 1] = true;
                }
                if (i >= 2) {
                    invalid[i - 2] = true;
                }
            } else if (street[i] == 'S') {
                invalid[i] = true;
                if (i >= 1) {
                    invalid[i - 1] = true;
                }
                if (i < n - 1) {
                    invalid[i + 1] = true;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!invalid[i]) {
                count++;
            }
        }

        return count;
    }
};