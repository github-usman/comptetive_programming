#include <iostream>
using namespace std;


void driver(){
  float a,b,c,d;
  cin>>a>>b>>c>>d;
  
  if(a/c > b/d)
    cout<<"Chefina"<<endl;
  else if(a/c < b/d)
     cout<<"Chef"<<endl;
  else
    cout<<"Both"<<endl;
  
}

int main() {
	int t;
	cin>>t;
	
	while(t--)
	  driver();
	return 0;
}
