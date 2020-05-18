#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
   char s[100],loc,a[100];
              
   int n,k=0,count=0,p,cmp;
   cin>>s;
   strcpy(a,s);
   reverseStr(s);
 
 if(strcmp(s, a)==0)
  {
  count++;
 }
 cout<<count;
 return 0;
}
