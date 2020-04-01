#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
while(n--)
{
int arr[2];
for(int i=0;i<2;i++)
{

    int n;
    cin>>n;
    arr[i]=n;
}
int a=arr[0];
int b=arr[1];
int o=0;
for (int i=a;i<b+1;i++)
{
if(i%10==2 || i%10==3 || i%10==9)
o=o+1;
cout<<"\n";
}
cout<<o;
}

return 0;

}


