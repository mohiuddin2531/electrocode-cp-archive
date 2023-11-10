#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, s, cnt = 0;
    cin >> k >> s;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if (z >= 0 && z <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}