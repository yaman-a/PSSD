#include "StreetParking.hpp"

int main() {
    StreetParking parking;

    cout << parking.freeParks("---B--S-D--S--") << endl;
    cout << parking.freeParks("DDBDDBDDBDD") << endl; 
    cout << parking.freeParks("--S--S--S--S--") << endl; 
    cout << parking.freeParks("SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D") << endl;

    return 0;
}