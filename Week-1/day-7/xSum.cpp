#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

         for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<< i<<" "<<j;
            }
            cout<< endl;
        }
    }

    return 0;
}