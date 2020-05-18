#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
  int n,count;
  cin>>n;
  while(n--)
  {
  char ch[20];
  cin>>ch;
  
  count=0;
  for(int i=0;ch[i]!='\0';i++)
  {
      if (isupper(ch[i]))
      count++;
   }
   cout<<count<<endl;
 }
 return 0;
}
