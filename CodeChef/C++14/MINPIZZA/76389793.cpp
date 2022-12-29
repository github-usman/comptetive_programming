#include <iostream>
using namespace std;


void solver(){
  
  int nn,xx;
  cin>>nn>>xx;
  
  int slices = nn*xx;
  if(slices%4 == 0){
    cout<<slices/4<<endl;
  }else{
    cout<<slices/4+1<<endl;
  }


}
int main() {
  
  int tt;
  cin>>tt;
  
  
  while(tt--)
    solver();
  
  
  
	return 0;
}
