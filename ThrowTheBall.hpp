#include <bits/stdc++.h>

using namespace std;

class ThrowTheBall {
    public:
    int timesThrown(int N, int M, int L) {
        vector<int> count(N, 0);
        int curr = 0;
        int passes = 0;

        while (true) {
            count[curr]++;

            if (count[curr] == M) {
                break;
            }

            if (count[curr] % 2 == 1) {
                curr = (curr + L) % N;
            } else {
                curr = (curr - L + N) % N;
            }

            passes++;
        }

        return passes;
    }
};