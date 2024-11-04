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



***********************ADDed another approch **************************
//vectors storing pairs used 
// then for each start and end calculate
// is there anyone who has intime before current and end time after current 
// check for max between curr and orginal max


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; ++i) {
//             cin >> b[i];
//         }
        
//         vector<pair<int, int>> v(n);
//         for (int i = 0; i < n; ++i) {
//             v[i] = {a[i], b[i]};
//         }
        
//         sort(v.begin(), v.end());
        
//         int answer = 1;
//         for (int i = 0; i < n; ++i) {
//             int start = v[i].first;
//             int end = v[i].second;
            
//             for (int j = start; j < end; ++j) {
//                 int count = 0;
//                 for (int k = 0; k < n; ++k) {
//                     if (v[k].first <= j && v[k].second > j) {
//                         ++count;
//                     }
//                 }
//                 answer = max(answer, count);
//             }
//         }
        
//         cout << answer << endl;
//     }
    
//     return 0;
// }