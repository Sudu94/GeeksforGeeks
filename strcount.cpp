#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
  char a[10],count=0;
 cin>>a;
 for(int i=0;i<strlen(a);i++)
  {
   if(a[i]>=97 && a[i]<=122)
    continue;
   else if(a[i]>=65 && a[i]<=90)
    continue;
   else if(a[i]>=0 && a[i]<=9)
    continue;
   else
    count++;
  }
   cout<<count;
 return 0;
}
