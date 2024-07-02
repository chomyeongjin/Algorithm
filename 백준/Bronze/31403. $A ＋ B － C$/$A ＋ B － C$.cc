#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c;
    int aa, bb, cc, ans1, ans2;
    
    cin >> a >> b >> c;
    aa = stoi(a); bb = stoi(b); cc = stoi(c);
    ans1 = aa + bb - cc;
    
    a += b;
    aa = stoi(a);
    ans2 = aa - cc;
    
    cout << ans1 << "\n" << ans2;
    
    return 0;
}