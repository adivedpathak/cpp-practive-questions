#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > A, B;

        if (n <= 2 || (n*(n+1)/2)%2==1 ) {
            cout << "no" << endl;
        } else {
            int mini = 1;
            int maxj = n;
            bool isA = true;

            while (mini < maxj) {
                if (isA) {
                    A.push_back(mini++);
                    A.push_back(maxj--);
                } else {
                    B.push_back(mini++);
                    B.push_back(maxj--);
                }
                isA = !isA;
            }
            sort(A.begin() ,A.end());
            sort(B.begin(),B.end());

            cout << "yes" << endl;
            for (int i = 0; i < A.size(); i++) {
                cout << A[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < B.size(); i++) {
                cout << B[i] << " ";
            }
            cout << endl;
        }
    }
}


// check cindition fro sum only 
// and boom