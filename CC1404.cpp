//logic is keep largest at ends to kepp avg of triplets mini.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > vec;
        vec.push_back(n - 1);
        vec.push_back(n - 2);
        for (int i = 1; i < n - 3; i++)
        {
            vec.push_back(i);
        }
        if (n > 3)
            vec.push_back(n - 3);

        vec.push_back(n);
        for (auto & val: vec)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}