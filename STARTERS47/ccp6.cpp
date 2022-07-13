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
    string s;
    cin>>s;
    while(s.size()!=0){
      int l=s.size();
      //cout<<"l is "<<l<<endl;
      if(l%2==0){
         string s1=s.substr(0,l/2);
         string s2=s.substr(l/2,l/2);
         //cout<<s1<<" "<<s2<<endl;
         if(!s1.compare(s2)){
            s.resize(l/2);
         }
         else{
          cout<<"NO\n";
          break;
         }
      }
      else{
        s.resize(l-1);
      }
    }
    if(s.size()==0){
      cout<<"YES\n";
    }
    
  }
return 0;
}