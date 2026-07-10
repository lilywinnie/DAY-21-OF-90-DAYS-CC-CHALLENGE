#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while (T--) {
        
        int N,X;
        cin>>N>>X;
        
        int required_subscriptions = ceil(N / 6.0);
        
        cout<< required_subscriptions*X <<"\n";
    }
    
    return 0; 
}
