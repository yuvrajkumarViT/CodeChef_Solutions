#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007


long long int pow2(long long int a, long long int b) {
    if (b == 0 || a == 1)
        return 1;
    long long int k = pow2(a, b / 2);
    if (b % 2)
        return k%MOD * k%MOD * a%MOD;
    else
        return k%MOD * k%MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,a;
        cin >> n >> a;
        long long int op=a,l=a;
        for (int i = 1; i < n; i++)
        {
            l = (l%MOD)*(a%MOD);
            l%=MOD;
            a=pow2(l,2*i+1)%MOD;
            op= (op%MOD)+(a%MOD);
            op%=MOD;
        }
        cout << op << endl;

    }
    return 0;
}
