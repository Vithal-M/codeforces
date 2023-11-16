#include<bits/stdc++.h>
using namespace std;

 
//For GCD
long long gcd(long long a, long long b)
{
if (a == 0)
 return b;
return gcd(b % a, a);
}
//For Combination
long long nCr(long long n, long long r) {
if (r > n) return 0;
if (r == 0 || n == r) return 1;
long double res = 0;
for (long long i = 0; i < r; i++) {
  res += log(n-i) - log(i+1);
}
return (long long)round(exp(res));
}
//For checking substring
long long isSubstring(string s1, string s2)
{
 // using find method to check if s1 is
 // a substring of s2
if (s2.find(s1) != string::npos)
   return s2.find(s1);
 return -1;
}
 
 
 
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
//Start Your Code Here:
int z;
cin>>z;
while(z--)
{
  int p;
  cin>>p;
  int n=2*p;
  vector<int>v(n,0);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int count=0;
  for(int i=1;i<p;i++)
  {
    count+=abs(v[i]-v[i-1]);
  }
  for(int i=p+1;i<n;i++)
  {
    count+=abs(v[i]-v[i-1]);
 
  }
  int pt=0;
  
  cout<<count<<endl;
  
  for(int i=0;i<p;i++)
  {
    cout<<v[i]<<" "<<v[n-i-1]<<endl;
  }
  
 
}
 
 
}