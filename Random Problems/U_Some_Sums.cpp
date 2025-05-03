#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int digit_sum(int a){
    int sum = 0;
    while( a != 0){
        int k = a %10;
        sum += k;
        a /= 10;
    }
    return sum;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        int n, a, b,sum=0;
        cin >> n >> a >> b;
        for (int i=0; i <= n; i++){
            int k = digit_sum(i);
            if(k <=b && k >= a){
                sum += i;
            }
        }
        cout << sum << endl;

    }


    return 0;
}

