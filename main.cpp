#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define ll long long
#define int long long
void solve() {
    ofstream stu("Student.txt");
    string name;
    ll id,grade;
    cin>>name>>id>>grade;
    stu<<name<<' '<<id<<' '<<grade;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TC=1;
    while (TC--)solve();
}