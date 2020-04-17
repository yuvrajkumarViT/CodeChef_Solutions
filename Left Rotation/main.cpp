#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int d;
    cin>>n>>d;
    int arr[n];
    int arrs[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    int b=0;
    for(int i=d;i<n;i++)
    {
        arrs[k]=arr[i];
        k++;
    }
    for(int i=0;i<d;i++)
    {
        arrs[k]=arr[i];
        k++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arrs[i]<<" ";
    }

}
