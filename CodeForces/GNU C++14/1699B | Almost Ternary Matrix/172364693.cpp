#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll nn, mm;
    cin >> nn >> mm;
    for (int i = 1; i <= nn; i++)
    {
 
        if (i % 4 == 2 || i % 4 == 3)
        {
 
            int j = 1;
 
            while (j <= mm / 2)
            {
                if (j % 2 == 0)
                {
                   for (int k = 1; k <= 1; k++)
                    {
                        cout << "1 0 ";
                    }
                }
                else
                {
                   for (int k = 1; k <= 1; k++)
                    {
                        cout << "0 1 ";
                    }
                }
                j++;
            }
        }
        else
        {
            int j = 1;
 
            while (j <= mm / 2)
            {
                if (j % 2 == 0)
                {
                   for (int k = 1; k <= 1; k++)
                    {
                        cout << "0 1 ";
                    }
                }
                else
                {
                   for (int k = 1; k <= 1; k++)
                    {
                        cout << "1 0 ";
                    }
                }
                j++;
            }
        }
        cout<<endl;
    }
}
 
//////////////***Main Function***//////////////
int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
        driver();
 
    return 0;
}