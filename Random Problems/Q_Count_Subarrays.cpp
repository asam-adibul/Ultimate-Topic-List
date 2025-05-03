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
        int n; cin >> n;
        int arr[n];
        for(int i=0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            int k = 1;
            for (int j=i; j < k;j++){
                cout << arr[j] <<" ";
            } k++;
        }
    }


    return 0;
}

