#include <iostream>
#include <climits>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  int n=5;
  int first = INT_MIN;
  int second = INT_MIN;
  for(auto x:arr){
    if(x>first){
        second = first;
        first = x;  
    }else if(x>second && x!=first){
        second = x;
    }
  }
  cout<<"Largest: "<<first<<endl;
  cout<<"Second Largest: "<<second<<endl;
  return 0;
}
