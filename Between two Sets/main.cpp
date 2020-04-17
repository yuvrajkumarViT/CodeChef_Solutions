#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;
    int arra[n];
    int arrb[m];
    for(int i=0;i<n;i++)
    {
        cin>>arra[i];

    }
    for(int i=0;i<m;i++)
    {
        cin>>arrb[i];

    }
    cout<<"\n";


    sort(arra,arra+n);
    sort(arrb,arrb+m);

    cout<<"\n";
    int y=0;
    int a=arra[n-1];
    int b=arrb[0];
    int hl=0;

    int arrc[m+n];
    for(int i=a;i<=b;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(i%arra[j]!=0)
                break;
            if(i%arra[j]==0)
            {
                cout<<i<<" "<<arra[j]<<"     ";

                cout<<"\n";

            }


        }

    }


}
