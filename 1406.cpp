
//just maintain first array for eachs score and 
//then swap first coz aim is to win tomu 
//do motu's array in desending and other on ascendong 
// then just count sum 


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), tomu, motu;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        (i % 2 == 0 ? motu : tomu).push_back(arr[i]);
    }

    sort(tomu.begin(), tomu.end());
    sort(motu.begin(), motu.end(), greater<int>());

    for (int i = 0; i < min(tomu.size(), motu.size()); i++) {
        if (tomu[i] < motu[i] && k > 0) {
            swap(tomu[i], motu[i]);
            k--;
        }
    }

    int tomu_score = accumulate(tomu.begin(), tomu.end(), 0);
    int motu_score = accumulate(motu.begin(), motu.end(), 0);

    cout << (tomu_score > motu_score ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
