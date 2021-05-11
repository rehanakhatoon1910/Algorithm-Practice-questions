//Question link- https://atcoder.jp/contests/abc156/tasks/abc156_c

// Solution:
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
int main() {
    int n,maximum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    vector<int> v1;
    for(int i=0;i<100;i++){
        maximum=0;
        for(int j=0;j<n;j++){
            maximum+=(v[j]-i)*(v[j]-i);
        }
        v1.push_back(maximum);
    }
    sort(all(v1));
    cout<<v1[0]<<endl;
}
