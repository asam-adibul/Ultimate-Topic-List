#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

bool is_lucky(ll a){
    
    while(a != 0){
        int k = a%10;
        if(k == 4 || k == 7){
            a /= 10;
            continue;
        } 
        else {
            return false;
        }
        
    } return true;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       int a, b; cin >> a >> b;
       int cnt = 0;
       for(int i=a; i <= b; i++){
            if(is_lucky(i)){
            cout << i <<" ";
            cnt++;
        }
    }
       if (cnt == 0) {
        cout << -1 << endl;
    }

}
    return 0;
}

