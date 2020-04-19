#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;


    while(t--)
    {
        int n,k;
        cin>>n>>k;



        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }


        int c=0;


        for(int i=n-1;i>=n-k;i--)
        {
            if(arr[i]=='T')
            {
                arr[i]='O';
            }
            if(arr[i]=='H')
            {
                arr[i]='O';
                for(int j=0;j<n;j++)
                {
                    int flag=0;
                    if(arr[j]=='H')
                    {
                        arr[j]='T';
                        flag=1;
                    }
                    if(arr[j]=='T' && flag==0)
                    {
                        arr[j]='H';
                    }

                }
            }

        }

        for(int i=0;i<n;i++)
        {
            if(arr[i]=='H')
                c++;

        }
        cout<<c<<"\n";
    }

}
