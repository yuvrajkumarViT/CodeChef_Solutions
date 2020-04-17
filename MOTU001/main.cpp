
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, i, m=0;
        cin>>a>>b>>c;
        for(i=b;i<=c;i++){
            if(i%a==b){
                if(m<i){
                    m=i;
                }
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
