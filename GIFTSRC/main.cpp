#include<bits/stdc++.h>

using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int x=0;
        int y=0;
        int n;
        cin>>n;
        cin.sync();
        string arr;
        getline(cin, arr);
        for(int i=0;i<arr.length();i++)
        {
            char s=arr[i];
            cout<<s<<" ";
        }
        cout<<x<<" "<<y<<"\n";

    }
}
