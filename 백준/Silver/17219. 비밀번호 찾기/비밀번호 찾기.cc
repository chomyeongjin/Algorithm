#include <iostream>
#include <map>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    map<string, string> mp;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string web, pw;

        cin >> web >> pw;
        mp[web] = pw;
    }

    for(int i = 0; i < m; i++) {
        string find;
        cin >> find;

        cout << mp[find] << "\n";
    }

   return 0;
}