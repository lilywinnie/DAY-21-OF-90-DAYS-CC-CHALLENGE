#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--){
        
        int X,Y,Z;
        cin>>X>>Y>>Z;
        
        // Scenario 1: Can afford both gym and trainer
        if (Z >= (X + Y)) {
            cout << 2 << endl;
        } 
        
        // Scenario 2: Can only afford the gym
        else if (Z >= X) {
            cout << 1 << endl;
        } 
        
        // Scenario 3: Cannot afford the gym at all
        else {
            cout << 0 << endl;
        }        
        
    }
}
