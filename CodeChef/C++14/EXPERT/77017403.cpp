#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	  double x,y;
	  cin>>x>>y;
	  
	  (((y/x)*100)>=50)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
