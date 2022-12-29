#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll nn;
    cin >> nn;
    // taking input

    vector<ll> vv;
    // this is a vector which stores the number

    // varibales declaration
    ll noOfones = 0;
    ll no_Of_odd_Numbers_except_One = 0;
    ll sum_Of_all_Numbers_except_One = 0;
    ll no_Twos = 0;

    // input the values

    for (int i = 0; i < nn; i++)
    {
        ll x;
        cin >> x;
        // count number of Ones;

        if (x == 1)
        {
            noOfones++; // count ones
        }
        else
        {
            if (x & 1 == 1)
            {
                no_Of_odd_Numbers_except_One++;
                // count the no of Ones
            }
            if (x == 2)
            {
                no_Twos++;
                // count the no twos
            }
            sum_Of_all_Numbers_except_One += x;
            // adding all the values which is other then ones
        }
        vv.emplace_back(x);
    }

    if (noOfones == nn && nn > 1)
    {
        cout << "CHEFINA" << endl;
        return;
    }

    // if there is no ones then apply odd even numbers
    if (noOfones == 0)
    {
        if (no_Of_odd_Numbers_except_One & 1 == 1 && noOfones == 0)
        {
            cout << "CHEF" << endl;
            return;
        }
        else
        {
            cout << "CHEFINA" << endl;
            return;
        }
    }

    // no of Ones which is notONes
    ll number_of_term_which_is_Not_ones = (nn - noOfones);

    // if No of array is morethan 1 in the array then
    if (noOfones >= 2)
    {
        if (((sum_Of_all_Numbers_except_One - (nn - noOfones)) & 1 == 1) && noOfones >= 2)
        {
            cout << "CHEF" << endl;
            return;
        }
        else
        {
            cout << "CHEFINA" << endl;
            return;
        }
    }
    // If no of ones is only one in the alll array  than

    // no of ones only one and ODD numbers is even
    if (((no_Of_odd_Numbers_except_One & 1) == 0) && (noOfones == 1))
    {
        cout << "CHEF" << endl;
        return;
    }
    // if No of ODD numbers odd and no_two = 0
    if (no_Twos == 0 && noOfones == 1)
    {
        cout << "CHEFINA" << endl;
        return;
    }
    sum_Of_all_Numbers_except_One -= 2;

    if (((sum_Of_all_Numbers_except_One - (nn - (noOfones + 1))) & 1 == 1) && (noOfones == 1))
    {
        cout << "CHEFINA" << endl;
        return;
    }
    else
    {
        cout << "CHEF" << endl;
        return;
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