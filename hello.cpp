#include<iostream>
using namespace std;
int main()
{
int n,a[10],count;
cin>>n;
for(int i=0;i<n-1;i++)
  {
    cin>>a[i];	
   }
   for(int i=0;i<n-1;i++)
   {
   	count=0;
   	 for(int j=0;j<n-1;j++)
   	 {
   	 	
   	 	if(a[i]==a[j])
   	 	{
   	 		count++;
   	 		
			}
			 
		}
		if(count%2!=0)
		{
			cout<<a[i]<<endl;
			break;
		}
       }
       
      
      return 0; 
}
