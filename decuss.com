#include<iostream>
using namespace std;
int main()
 {
  int sum,rev,temp,a;
  cin>>a;
  while(a!=0)
   {
    temp=a%10;
    sum=sum*10+temp;
    a=a/10;
   }
  return 0;
  }
   
