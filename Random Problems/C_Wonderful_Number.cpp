#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        vector<ll>v1,v2;
       ll n; cin >> n;
       if(n%2 == 1){
        while(n != 0){
            v1.pb(n%2);
            n /= 2;
       }
       for(int i = v1.size()-1; i >= 0; i--){
            v2.pb(v1[i]);
       }
       (v1==v2) ? cout << "YES" << endl : cout << "NO" <<endl;
       
    } else cout <<"NO" << endl;

}
       
       

    return 0;
}

