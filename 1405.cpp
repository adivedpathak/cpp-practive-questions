#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > intime(n);
        vector < int > outtime(n);

        for (int i = 0; i < n; ++i) {
            cin >> intime[i];  //intime array
        }
        for (int i = 0; i < n; ++i) {
            cin >> outtime[i];   //outtime
        }


//read constraints  last line
//now consider array like timeline and make counts at each point on timline

        vector < int > timeline(1001, 0); 
        for (int i = 0; i < n; ++i) {
            timeline[intime[i]]++;   //guesst aala
            timeline[outtime[i]]--;   //guest challa
        }



        int curr = 0;
        int maxgst = 0;

        for (int i = 0; i < 1001; ++i) {
            curr += timeline[i];
            maxgst = max(maxgst, curr);
        }  
        //timeline ver

        cout << maxgst << endl;
    }
 
}