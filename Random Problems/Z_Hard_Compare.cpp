#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

const ll mod = 1e7;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        
        if((b * log(a)) > (d * log(c)) ) {
                cout << "YES" <<'\n';
        }else{
                cout << "NO" <<'\n';
        }
    }

    return 0;
}

