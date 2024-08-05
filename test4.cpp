#include "AzimuthMonitoring.hpp"

int main() {
    AzimuthMonitoring azimuthMonitoring;
    cout << azimuthMonitoring.getAzimuth({"RIGHT"}) << endl;
    cout << azimuthMonitoring.getAzimuth({"LEFT", "LEFT", "TURN AROUND"}) << endl; 
    cout << azimuthMonitoring.getAzimuth({"LEFT 5", "RIGHT 10", "LEFT 15", "RIGHT 20", "LEFT 25", "RIGHT 30", "LEFT 35", "RIGHT 40"}) << endl; 
    cout << azimuthMonitoring.getAzimuth({"RIGHT 59", "RIGHT", "RIGHT", "HALT", "LEFT", "LEFT", "LEFT"}) << endl; 
    cout << azimuthMonitoring.getAzimuth({"TURN AROUND", "HALT", "LEFT 5", "HALT", "LEFT 5", "HALT"}) << endl; 
    cout << azimuthMonitoring.getAzimuth({"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "HALT"}) << endl; 

    return 0;
}