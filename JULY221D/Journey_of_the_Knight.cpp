#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <climits>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define lli long long int
#define ll long long
#define pb push_back
#define mod 1000000007
#define ite vector<int> :: iterator it
const int N=10e5+10;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int s1=x1+y1;
    int s2=x2+y2;
    if(abs(s1-s2)%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  }
return 0;
}