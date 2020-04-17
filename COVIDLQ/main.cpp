#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n<7)
        {
            int m=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                  {
                      m++;
                  }

            }
            if(m>1)
            {
                cout<<"NO"<<"\n";

            }
            else
            {
                cout<<"YES"<<"\n";


            }
        }
        if(n>=7)
        {
            int c=0;
            int m=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    c=i+1;
                    if(arr[c]==1 ||arr[c+1]==1 ||arr[c+2]==1 ||arr[c+3]==1 ||arr[c+4]==1)
                    {
                        cout<<"NO"<<"\n";
                        m++;
                        break;
                    }

                }

            }
            if(m==0)
            {
                cout<<"YES"<<"\n";
            }


        }
    }
    return 0;
}
