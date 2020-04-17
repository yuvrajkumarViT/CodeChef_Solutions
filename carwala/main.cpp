#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int desc=0;
        long long int c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            long long int m;
            cin>>m;
            m=m%1000000007;
            arr[i]=m;
        }
        //Descending order
        sort(arr, arr+n, greater<int>())

        //main operation
        for(int i=0;i<n;i++)
        {
            c=c+arr[i];
            for(int j=0;j<n;j++)
            {
                if(arr[j]!=0)
                arr[j]=arr[j]-1;
            }
        }
        cout<<c%1000000007<<"\n";
    }
    return 0;
}
