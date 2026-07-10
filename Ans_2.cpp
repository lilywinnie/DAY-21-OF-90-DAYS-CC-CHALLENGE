#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while (t--){
        
        int A, B, C, X;
        cin>>A>>B>>C>>X;
        
        if ((A + B >= X) || (A + C >= X) || (B + C >= X))
            cout << "YES" << endl;
    
        else 
            cout << "NO" << endl;
        
        }
        
    return 0;    

}
