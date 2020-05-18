#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
   {
    char ch[100];
     cin>>ch;
     
       for(int i=0;ch[i]!='\0';i++)
      {
         if(ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122)
         {
           cout<<ch[i];
          }  
   
       }
        cout<<endl;
         int k=0;
        for(int i=0;ch[i]!='\0';i++)
        {
        if(ch[i]>=48 && ch[i]<=57)
        {
         cout<<ch[i];
         }
        
        }
        cout<<endl;
    
     for(int i=0;ch[i]!='\0';i++)
      {
         if(ch[i]>=32 && ch[i]<=47 ||ch[i]>=58 && ch[i]<=64 || ch[i]>=91 && ch[i]<=96 ||ch[i]>=123 && ch[i]<=126 )
          cout<<ch[i];
       }
      cout<<endl;
     
}
	return 0;
}
