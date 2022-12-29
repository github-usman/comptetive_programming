#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll arr[350] = {0};

    ll x;
    for (int i = 0; i < 37; i++)
    {
        cin >> x;
        if (x > 0)
        {
            arr[x]++;
        }
        else
        {
            continue;
        }
    }
    // for (int i = 0; i < 350; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }

    cout << "MATHEMATICS" << endl;

    ll maths = 101;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // cout<<maths<<" ";
            if (arr[maths] > 0)
            {
                if(i == 2 && j == 3){
                    cout << maths;continue;
                }
                cout << maths << " ";
            }
            else
            {
                 if(i == 2 && j == 3){
                    cout << " ";continue;
                }
                cout << "  ";
            }
            maths++;
        }
        cout << endl;
    }
    cout << "COMPILER DESIGN" << endl;
    ll cd = 201;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // cout<<cd<<" ";
            if (arr[cd] > 0)
            {
                if(i == 2 && j == 3){
                    cout << cd;continue;
                }
                cout << cd << " ";
            }
            else
            {
                 if(i == 2 && j == 3){
                    cout << " ";continue;
                }
                cout << "  ";
            }
            cd++;
        }
        cout << endl;
    }
    cout << "DESIGN THINKING" << endl;
    ll dt = 301;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[dt] > 0)
            {
                if(i == 2 && j == 3){
                    cout << dt;continue;
                }
                cout << dt << " ";
            }
            else
            {
                 if(i == 2 && j == 3){
                    cout << " ";continue;
                }
                cout << "  ";
            }
            dt++;
        }
        cout << endl;
    }
}

//////////////***Main Function***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--)
    driver();

    return 0;
}