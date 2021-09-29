#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back
#define fr                  first
#define se                  second
#define all(v)              v.begin(),v.end()
#define JOSHI               ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
const ll                    mod = 1e9 + 7;

using namespace std;




//              ********************** Functions Start **********************          //



ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}


bool isprime(ll n){ 
    if (n <= 1) return true;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
            for (ll i = 5; i * i <= n; i = i + 6)
                    { if (n % i == 0 || n % (i + 2) == 0){ return false;}}
    return true;
}

void swap(int &x, int &y) {int temp = x; x = y; y = temp;}

bool ispalin(string s)
{
    for(ll i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}






void solve()
{
       
      

    ll n;
    cin>>n;
    vector<ll>v(n);
    ll cn=0;
    rep(0,n)
    {
        cin>>v[i];
        if(v[i]%2!=0)
        {
            cn++;
        }
    } 

    ll gc=v[0];

    for(int i=1;i<n;i++)
    {
        gc=gcd(v[i],gc);
    }
    if(gc==1)
    {
        cout<<0<<en;
        return;
    }

    ll mini=INT_MAX;

     for(int i=0;i<n;i++)
     {
        ll nu=v[i];
        cn=0;
        while(nu%2!=1)
        {
            nu=nu/2;
            cn++;
        }
        mini=min(cn,mini);
     }
     cout<<mini<<en;






}


int main(void)
{

    

      


      ll test_case=1;
      cin>>test_case;

      while(test_case--)
      {

        solve();

      }




  return 0;

}