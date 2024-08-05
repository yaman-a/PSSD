#include <bits/stdc++.h>

using namespace std;

class AzimuthMonitoring {
    public:
    int getAzimuth(vector<string> instructions) {
        int azimuth = 0;

        for (const string& i : instructions) {
            if (i == "HALT") {
                break;
            } else if (i == "LEFT") {
                azimuth = (azimuth + 270) % 360; // equivalent to subtracting 90 degrees
            } else if (i == "RIGHT") {
                azimuth = (azimuth + 90) % 360;
            } else if (i == "TURN AROUND") {
                azimuth = (azimuth + 180) % 360;
            } else if (i.substr(0, 4) == "LEFT") {
                int degrees = stoi(i.substr(5));
                azimuth = (azimuth + 360 - degrees) % 360; // turn left by X degrees
            } else if (i.substr(0, 5) == "RIGHT") {
                int degrees = stoi(i.substr(6));
                azimuth = (azimuth + degrees) % 360; // turn right by X degrees
            }
        }

        return azimuth;
    }
};