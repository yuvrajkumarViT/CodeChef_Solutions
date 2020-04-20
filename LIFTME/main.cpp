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
        int c=0;

        long long int n,q;
        cin>>n>>q;
        long long int l=0;
        int h=0;
        int arr[q];
        while(q--)
        {
            int g=0;


            long long int f,d;
            cin>>f>>d;
            arr[h++]=d;
            g=arr[c-1];

            if(c==0)
            {
                l=f;


                l=l+abs(d-f);






            }


            if(c!=0 && q>0)
            {

                l=l+abs(g-f);




                l=l+abs(d-f);







            }

            if(c!=0 && q==0)
            {
                l=l+abs(g-f);
                l=l+abs(d-f);
            }
            c++;




         }
         cout<<l<<"\n";


    }
    return 0;
}
