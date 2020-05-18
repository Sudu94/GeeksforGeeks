#include<iostream>
using namespace std;

int main()
{
int a[50],n,first,last,mid,search,i;
cin>>n;
     for( i=0;i<n;i++)
       {
          cin>>a[i];
           
         }
        cin>>search;
        first=0;
        last=n-1;
        mid=(first+last)/2;
        
       while(first<=last)
        {
          if(a[mid]<search)
           {
             first=mid+1;
             }
            
          else if(a[mid]==search)
              {
               cout<<mid<<endl;
               break;
               }  
           else
               {
               last=mid-1;
               }
            mid=(first+last)/2; 
         }
         if(first>last)
          {
            cout<<"-1";
            }

return 0;
}
