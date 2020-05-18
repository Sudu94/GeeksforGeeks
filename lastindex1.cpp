#include<iostream>
using namespace std;
int main()
{
 int p,num,count,c;
 char ch[100];
 cin>>p;
 for(int i=0;i<p;i++)
 {
   cin>>ch;
  c=count=0;
  while(ch[c]!='\0')
  {
   num=ch[c]-'\0';
   if(num==1)
   count++;
   c++;
  }
 }
 cout<<count;
 return 0;
}
