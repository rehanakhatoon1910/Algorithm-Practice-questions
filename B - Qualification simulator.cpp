//Question Link- https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b

//Solution:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,n) for(ll i=0;i<n;i++)
#define All(x) (x).begin(), (x).end()
int main() {
    int n,A,B;
    cin>>n>>A>>B;
    char s[n];
    int i=0,no_of_passed=0,no_of_overseas=1;
    string result="";
    loop(i,n) cin>>s[i];
    loop(i,n){
        if(s[i]!='a'&&s[i]!='b'){
            result="No";
            cout<<result<<endl;
        }
        else if(s[i]=='a' && no_of_passed<(A+B)){
            no_of_passed++;
            cout<<"Yes"<<endl;
        }
        else if(s[i]=='b' && no_of_overseas<=B && no_of_passed<(A+B)){
            no_of_overseas++;
            no_of_passed++;
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
