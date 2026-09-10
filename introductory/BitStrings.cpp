#include<bits/stdc++.h>
using namespace std;
long long bin_mul(long long a, long long n) {
    const long long mod = 1e9 + 7;
    long long result = 1;

    while (n > 0) {
        if (n & 1) {
            result = (result * a) % mod;
        }

        a = (a * a) % mod;
        n >>= 1;
    }

    return result;
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    long long ans = bin_mul(2,n);
    cout<<ans<<endl;
}