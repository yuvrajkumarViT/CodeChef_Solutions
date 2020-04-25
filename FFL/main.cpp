#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int arrp[n];
        int arrf[n];
        int arrtype[n];
        int h=0;
        for(int i=0;i<n;i++)
        {
            cin>>arrp[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arrf[i];
            if(arrf[i]==0)
            {
                arrtype[h++]=i;
            }
        }




        int cost=0;
        cost=100-s;

        int type=0;
        int price=0;
        int totalprice=0;
        int flag=0;
        int d=0;
        int real=0;



        for(int i=0;i<h;i++)
        {
            real=arrtype[i];
            type=arrf[real];
            price=arrp[real];






            if(type==0)
            {
                d=i;
                for(int k=0;k<n;k++)
                {
                    if(arrf[k]!=0)
                    {

                        totalprice=price+arrp[k];

                        if(totalprice<=cost)
                        {
                            cout<<"yes"<<"\n";
                            flag=1;
                            break;

                        }
                    }

                }
                if(flag==1)
                {
                    break;
                }
            }




        }
        if(flag==0)
            {
                cout<<"no"<<"\n";
            }

    }




}
