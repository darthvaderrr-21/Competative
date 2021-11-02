#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string alpha;
        string s;
        cin>>alpha;
        cin>>s;

        int arr[26];

        for(int i=0; i<26; i++) {
            arr[alpha[i]-'a'] = i;
        }

        int ans = 0;
        for(int i=1; i<s.length(); i++) {
            ans += abs(arr[s[i]-'a'] - arr[s[i-1]-'a']);
        }
        cout<<ans<<endl;
    }
    return 0;
}
