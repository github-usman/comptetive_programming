#include <iostream>
using namespace std;

void driver() {
	int x,y;
	cin>>x>>y;
	
	(x >= y)?cout<<"YES"<<endl:cout<<"NO"<<endl;

}

int main(){
    int t;
    cin>>t;
    
    while(t--){
    driver();
    }
    return 0;
}
