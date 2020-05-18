#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main()
    {
	int t;
	cin>>t;
	while(t--)
        {
         string ch;
         cin>>ch;
          string s,s1,s2;
        for (const char p : ch)
            {
            if (isalpha(p))
               {
	            s += p;
	        }
            else if(isdigit(p))
              {
                   s1+=p;
                 }
            else
                s2+=p;
           }
           cout<<s<<endl<<s1<<endl<<s2;
      }
	return 0;
}
