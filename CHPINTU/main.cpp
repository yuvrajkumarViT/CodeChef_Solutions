#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arra[n];
        int arrb[n];
        int a[m];
        int c=0;
        int k=0;
        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arrb[i];
        }
        for(int i=0;i<n;i++)
        {
            int c=arrb[i];

            if(arra[i]>-1)
            {
                for(int j=i+1;j<n;j++)
                {

                    if(arra[j]==arra[i])
                    {


                        c=c+arrb[j];
                        arra[j]=-1;

                    }
                }



                a[k++]=c;

            }




            }




        int* i1;
    i1 = std::min_element(a, a + k);

    cout << *i1 << "\n";
        /*for(int i=0;i<k;i++)
        {
            l=l+a[i];
            if(a[i]>0)
            {
                cout<<a[i];
                break;

            }

        }
        if(l==0)
        {
            cout<<0;
        }*/




        }


}
