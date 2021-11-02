#include <bits/stdc++.h>
using namespace std;

void isPossible() {
    int n;
    char chr;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) 
        cin>>arr[i];


    vector<int> additive;
    vector<int> subtract;
    for(int i=0;i<n;i++) {
        cin >> chr;
        if(chr == 'B') subtract.push_back(arr[i]);
        else additive.push_back(arr[i]);
    }

    sort(subtract.begin(), subtract.end());
    sort(additive.begin(), additive.end());

    bool flag[n+1];
    memset(flag, 0, sizeof flag);

    int j = 0;
    for(int i=1;i<=n;i++) {
        while(j < subtract.size() && subtract[j] < i) j++;
        if(j == subtract.size()) break;

        flag[i] = true;
        j++;
    }

    j = additive.size() - 1;
    for(int i=n;i>0;i--) {
        while(j >= 0 && additive[j] > i) j--;
        if(j < 0) break;

        flag[i] = true;
        j--;
    }

    int count = 0;
    for(int i=1;i<=n;i++) {
        count += flag[i];
    }

    if(count == n) cout << "YES" <<endl;
    else cout << "No" <<endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        isPossible();
    }

    return 0;
}