#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if(n-k==1){
	        cout<<"-1"<<endl;
	    }
	    else if(k==0){
	        for(int i=1;i<n;i++){
	            cout<<i+1<<" ";
	        }
	        cout<<"1"<<endl;
	    }
	    else if(k==n){
	         for(int i=1;i<=n;i++){
	             cout<<i<<" ";
	         }
	         cout<<endl;
	        
	    }
	    else{
	         for(int i=1;i<=k;i++)
	         {
	             cout<<i<<" ";
	         }
	          for(int i=k+1;i<n;i++){
	              cout<<i+1<<" ";
	          }
	          cout<<k+1<<endl;
	    }
	}
	return 0;
}
