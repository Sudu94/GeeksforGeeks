#include<iostream> 
#include<algorithm>
using namespace std;

  int main() {
	long int t,n,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    long int a[n];
	    for(j=0;j<n;j++)
	    cin>>a[j];
	    sort(a,a+n);
	    
	    for(k=n-1;k>=0;k--){
	        if(a[k]%2!=0)
	        cout<<a[k]<<" ";  }
	    for(k=0;k<n;k++){
	        if(a[k]%2==0)
	        cout<<a[k]<<" ";  }
	   cout<<endl;
	}
    return 0;

}










