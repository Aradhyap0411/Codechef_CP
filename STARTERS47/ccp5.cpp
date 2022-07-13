#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define pb push_back
#define mod 1000000007
#define ite vector<int> :: iterator it
#define endl "\n"
const int N=10e5+10;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>v;
    int p1,p2;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.pb(x);
       if(x==1){
       	p1=i;
       }
       if(x==n){
       	p2=i;
       }
    }
    if(p1==0 and p2==n-1){
    	cout<<"0\n";
    	continue;
    }
    if(p2==n-1){
    	cout<<p1<<endl;
    	continue;
    }
    if(p1==0){
    	cout<<n-1-p2<<endl;
    	continue;
    }
    int ans=0;
    if(p2<p1){
    	ans=p1+(n-1-p2)-1;
    }
    else{
    	ans=p1+(n-1-p2);
    }
    cout<<ans<<endl;
  }
return 0;
}