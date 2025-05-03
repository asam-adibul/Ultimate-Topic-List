#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll pow(ll a,ll n){
    ll sum = 1;
    while(a--){
        sum *= n;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        int x,n; cin >> x >> n;
        ll sum = 0;
        for(int i=2; i <= n; i+=2){
            sum += pow(x,i);
        }
        cout << sum << endl;
    }


    return 0;
}

