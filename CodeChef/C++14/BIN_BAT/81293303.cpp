#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	  int a,b,c;
	  cin>>a>>b>>c;
	  
	  int x = 0;
	  while(a != 1){
	    a = a/2;
	    x++;
	  }
	  cout<<(b*x)+c*(x-1)<<endl;
	}
	return 0;
}
