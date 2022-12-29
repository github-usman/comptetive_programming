#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
void driver(){

	ll a,b;
	cin>>a>>b;
	if(isPrime(a+b)){
		cout<<"Alice"<<endl;
	}else{
		cout<<"Bob"<<endl;
	}
	
}

//////////////***Main Function***//////////////
int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;

	while(t--)
	driver();



	return 0;
}