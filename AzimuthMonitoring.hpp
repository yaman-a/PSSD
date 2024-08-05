#include <bits/stdc++.h>

using namespace std;

class AzimuthMonitoring {
    public:
    int getAzimuth(vector<string> instructions) {
        // initialise to 0 (facing north)
        int azimuth = 0;

        // iterate through all instructions
        for (const string& i : instructions) {
            if (i == "HALT") {
                break; // stop if halt
            } else if (i == "LEFT") {
                azimuth = (azimuth + 270) % 360; // equivalent to subtracting 90 degrees
            } else if (i == "RIGHT") {
                azimuth = (azimuth + 90) % 360; // Turn right by 90 degrees
            } else if (i == "TURN AROUND") {
                azimuth = (azimuth + 180) % 360; // Turn around (180 degrees)
            } else if (i.substr(0, 4) == "LEFT") {
                int degrees = stoi(i.substr(5)); // // extract degrees from instruction
                azimuth = (azimuth + 360 - degrees) % 360; // turn left by X degrees
            } else if (i.substr(0, 5) == "RIGHT") {
                int degrees = stoi(i.substr(6));    // same thing as above
                azimuth = (azimuth + degrees) % 360; // turn right by X degrees
            }
        }

        // return the azimuth
        return azimuth;
    }
};