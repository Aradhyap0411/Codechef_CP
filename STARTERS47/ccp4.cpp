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
    if(n%2==0 || n==7){
    	cout<<"YES\n";
    	continue;
    }
    if(n>7){
    	cout<<"YES\n";
    }
    else{
    	cout<<"NO\n";
    }
    // int ans1=n/7;
    // int rem1=n-ans1*7;
    // if(rem1%2==0){
    // 	cout<<"YES\n";
    // 	continue;
    // }
    // int ans2=n/2;
    // int rem2=n-ans2*2;
    // if(rem2%7==0){
    // 	cout<<"YES\n";
    // 	continue;
    // }
    // cout<<"NO\n";
  }
return 0;
}