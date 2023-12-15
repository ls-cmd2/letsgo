//Shashank Shekhar
//title: projects.cpp
//date: 2023-12-15 20:56:25
//Path: ~/Desktop/git demo/letsgo/projects.cpp
//bool cmp (pair<string,int> &a, pair <string ,int> &b){return a.second<b.second;}
//int mx = *max_element(v.begin(), v.end())
// vector<vector<int>>dp(m,vector<int>(n,1));
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fi(n)        for(int i=0;i<n;i++)
#define el endl;
#define sor sort(v.begin(),v.end(),greater<int>());
int gcd(int a, int b){
if (b == 0)
  return a;
return gcd(b, a % b); 
}
void add_divs(int x, map<int, int>&divs)
{
int i = 2;
while(i * i <= x){
    while (x % i == 0){
    divs[i]++;
x /= i;
}
i++;
}
if(x > 1) divs[x]++;
}
signed main() 
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
}
}