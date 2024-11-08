#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector < string > roads;
        vector < string > dir;
        string newline;
        getline(cin, newline);
        for (i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);
          
            if (s[0] == 'B' || s[0] == 'R')
                roads.push_back(s.substr(5, s.length() - 5));
            else
                roads.push_back(s.substr(4, s.length() - 4));


            if (s[0] == 'R')
                dir.push_back("Left");
            else if (s[0] == 'L')
                dir.push_back("Right");
        }
        
        
        dir.push_back("Begin");
        for (i = n - 1; i >= 0; i--)
        {
            cout << dir[i] + roads[i] << "\n";
        }
        cout << "\n";
    }
    return 0;
}  

//sglya directions ultya honar 
//input ghetl ki lagech store kel dir and roads madhe  to save time 