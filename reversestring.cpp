#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int i,k=0;
 char s[20];
 cin>>s;
 for(int i=0;s[i]!='\0';i++)
 {
   k++;
   }
for(int i=k-1;i>=0;i--)
 {
  cout<<s[i];
 }
 
 return 0;
}
 
