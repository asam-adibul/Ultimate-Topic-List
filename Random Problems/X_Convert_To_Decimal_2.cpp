#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    cin >> t;
    while(t--) { 
        ll n; cin >> n;
        ll cnt = 0;
        while(n != 0){
            ll k = n % 2; 
            if(k==1){
                cnt++;
            } n /= 2;
        } 
        ll ans = 0;
        for (int i=0; i < cnt; i++){
            ans = ans + pow(2,i);
        }
         cout << ans << '\n'; ans = 0;
    
}


    return 0;
}

