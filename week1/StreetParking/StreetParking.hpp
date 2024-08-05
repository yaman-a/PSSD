#include <bits/stdc++.h>

using namespace std;

class StreetParking {
    public:
    int freeParks(string street) {
        int n = street.size();
        // Create bool vector to mark invalid parking spots
        vector<bool> invalid(n, false);


        // loop through each position in the street
        for (int i = 0; i < n; i++) {
            // mark position D as invalid
            if (street[i] == 'D') {
                invalid[i] = true;
            } else if (street[i] == 'B') { // Mark B as invalid and mark the previous two positons invalid
                invalid[i] = true;
                if (i >= 1) {
                    invalid[i - 1] = true;
                }
                if (i >= 2) {
                    invalid[i - 2] = true;
                }
            } else if (street[i] == 'S') { // Mark S as invalid and mark positon before and after as invalid
                invalid[i] = true;
                if (i >= 1) {
                    invalid[i - 1] = true;
                }
                if (i < n - 1) {
                    invalid[i + 1] = true;
                }
            }
        }


        // Count all valid parking spaces and return it
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!invalid[i]) {
                count++;
            }
        }

        return count;
    }
};