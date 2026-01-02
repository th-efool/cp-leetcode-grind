#include <bits/stdc++.h>
using namespace std;

void Evaluate(){
     // TAKING ALL INPUTS
     int numberOfStations;
     cin >> numberOfStations;
     int  oneWayDistance;
     cin >> oneWayDistance;
     int GasStationLocations[numberOfStations];
     for (int i=0; i<numberOfStations; i++){
         cin >> GasStationLocations[i];
     }
    // PROCESSING INPUTS
    int maxDistanceBetweenStations=0;
    int previousGasStation=0;
    for (auto currentGasStation: GasStationLocations){
        int diff = currentGasStation-previousGasStation;
        maxDistanceBetweenStations = std::max(diff,maxDistanceBetweenStations);
        previousGasStation =currentGasStation;
    }
    int EdgeCaseDistance = 2*(oneWayDistance-GasStationLocations[numberOfStations-1]);
    maxDistanceBetweenStations = std::max(EdgeCaseDistance,maxDistanceBetweenStations);
    cout << maxDistanceBetweenStations <<endl;
    
    
}

int main() {
    int i;
    cin >> i;
    while (i--){
        Evaluate();
    }
    return 0;
   
}