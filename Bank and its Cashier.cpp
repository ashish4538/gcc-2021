#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
const int INF = 1e9 + 7;
 
 
 
 
 
 
 void solve(){
     ll n;
   cin>>n;
   if(n==0){
       cout<<0<<"\n";
       return;
   }
   if(n%3==0){
       ll y=n/3;
       y=y*2;
       cout<<y<<"\n";
   }
   else{
       ll y=n/3;
       y= y*2 + 1;
       cout<<y<<"\n";
   }
   
 }
 
 
 
 
 
 
int main(){
 solve();
   return 0;
}