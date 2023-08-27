  #include<bits/stdc++.h>
  using namespace std;
  long long binpow_mod(long long x,long long y,long long n){
     long long res=1;  
     //x%=n;
    while(y){
    if(y%2==1){
        res=(res*x) % n ; 
     }
     x=(x*x) % n;
     y/=2;
    }
    return res;
  }
  int main(){

  int t;
  cin>>t;
  while(t--){
    long long x,y,n;
    cin>>x>>y>>n;
    long long ans=binpow_mod(x,y,n);
   cout<<ans<<endl;
  }
    return 0;
  }
