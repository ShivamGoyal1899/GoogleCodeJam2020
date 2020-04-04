#include<bits/stdc++.h>
#define int long long int
#define rdj ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

signed main()
{
    rdj
    int t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        int n;
        cin>>n;
        int m[n][n],i,j,trace=0,r=0,c=0,k=0,flag=0,f=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>m[i][j];
                if(i==j)
                trace+=m[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                   if(m[i][j]==m[i][k])
                   {
                       r++;
                       flag=1;
                       break;
                   }
                }

                if(flag==1)
                break;
            }
        }

        for(j=0;j<n;j++)
        {
            f=0;
            for(i=0;i<n;i++)
            {
                for(k=i+1;k<n;k++)
                {
                    if(m[i][j]==m[k][j])
                    {
                        c++;
                        f=1;
                        break;
                    }
                }

                if(f==1)
                break;
            }
        }

        cout<<"Case #"<<x<<": "<<trace<<" "<<r<<" "<<c<<endl;
    }
    return 0;
}