#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
         map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int c=0;
        for(int i=0;i<=n/2;i++)
        {
            if(m[a[i]]>n/2)
            {
                cout<<a[i]<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"-1"<<endl;
        }
        cout<<endl;
}
   return 0;
}
