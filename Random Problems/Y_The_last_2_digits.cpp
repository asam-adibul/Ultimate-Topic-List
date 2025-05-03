#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

const ll mod = 1e9;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       ull a, b, c, d; 
       cin >> a >> b >> c >> d;
       
       ull sum = ((a%100)*(b%100)*(c%100)*(d%100));
       string s = to_string(sum);
       cout << s[s.size()-2] << s[s.size()-1];
    }


    return 0;
}

