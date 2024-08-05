#include <bits/stdc++.h>

using namespace std;

class ThrowTheBall {
    public:
    int timesThrown(int N, int M, int L) {
        // Initialize vector to track the count of passes for each player
        vector<int> count(N, 0);
        // Start with player 1 (index 0)
        int curr = 0;
        // Counter to track passes
        int passes = 0;

        // Loop to simulate the game, will keep going until break
        while (true) {
            // Increment count for current player
            count[curr]++;

            // If the current player has received the ball M times, end the game
            if (count[curr] == M) {
                break;
            }

            // Determine the next player based on the current count
            if (count[curr] % 2 == 1) {
                // Pass ball L places to the right
                curr = (curr + L) % N;
            } else {
                // Pass ball L places to the left
                curr = (curr - L + N) % N;
            }

            // Increment passes
            passes++;
        }

        return passes;
    }
};