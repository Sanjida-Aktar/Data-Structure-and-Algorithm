#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // n= nuber of frute, k=glass juice banate kotogula lagbe p=1 glass theke paoa joy poient
        int n, k;
        long long p;
        long long sum = 0;
        cin >> n >> k >> p;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        
        sort(a.begin(), a.end());
        long long ans = sum;
        long long pref=0;
        for (int i = 0; i < n / k; i++) {
            for (int j = i * k; j < (i + 1) * k; j++) {
                pref += a[j];
            } 
            long long total= sum-pref+(i+1)*p;
            ans = max(ans, total);
   
}
cout << ans << endl;
    }

return 0;
}