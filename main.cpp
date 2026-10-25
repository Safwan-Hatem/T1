#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define ll long long
#define int long long
void solve() {
    fstream fr("fruits.txt");
    string a,b,c;
    fr>>a>>b>>c;
    fr.close();
    ofstream fr2("fruits.txt");
    fr2<<"Fresh Fruits";
    fr2.close();

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TC=1;
    while (TC--)solve();
}