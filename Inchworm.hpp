#include <iostream>


class Inchworm {
    public:
    int lunchtime(int branch, int rest, int leaf) {
        // Initialise counter of leaves eaten
        int count = 0;

        // Iterate through entire branch in increments of "rest" distance
        for (int i = 0; i <= branch; i+= rest) {
            // Check if current position is a multiple of "leaf" distance, if so increment counter
            if (i % leaf == 0) {
                count++;
            }
        }

        // Return leaves eaten
        return count;
    }
};