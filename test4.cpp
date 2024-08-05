#include "AzimuthMonitoring.hpp"

int main() {
    AzimuthMonitoring a;
    cout << a.getAzimuth({"RIGHT"}) << endl; // Should return 90
    cout << a.getAzimuth({"LEFT", "LEFT", "TURN AROUND"}) << endl; 
    cout << a.getAzimuth({"LEFT 5", "RIGHT 10", "LEFT 15", "RIGHT 20", "LEFT 25", "RIGHT 30", "LEFT 35", "RIGHT 40"}) << endl; 
    cout << a.getAzimuth({"RIGHT 59", "RIGHT", "RIGHT", "HALT", "LEFT", "LEFT", "LEFT"}) << endl; 
    cout << a.getAzimuth({"TURN AROUND", "HALT", "LEFT 5", "HALT", "LEFT 5", "HALT"}) << endl; 
    cout << a.getAzimuth({"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "HALT"}) << endl; 

    return 0;
}