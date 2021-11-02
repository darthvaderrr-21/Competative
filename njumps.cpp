#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long x, n;
        cin>>x>>n;

        long long st = (n/4) * 4 + 1;
        for(long long i=st; i<=n; i++) {
            if(x%2) {
                x = x+i;
            } else {
                x = x-i;
            }
        }

        cout<<x<<endl;
    }
    return 0;
}
