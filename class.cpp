#include<iostream>
using namespace std;

class calculate
{
  public:
  int n,f,i;

 void fact()
 {
    cout<<"Enter a number for factorial:";
    cin>>n;
    f=1;
   for(i=1;i<=n;i++)
    {
    f=f*i;
    }
   cout<<f<<endl;
  }
 void Primeno()
 {
  cout<<"Enter a number for prime number:";
  cin>>n;
  for(i=2;i*i<n;i++)
   {
       if(n%2==0)
        cout<<"Not a Prime";
       else
        cout<<"Prime number:";
    }
     
  }
 
};



int main()
{
calculate obj;
obj.fact();
obj.Primeno();


return 0;
 }

