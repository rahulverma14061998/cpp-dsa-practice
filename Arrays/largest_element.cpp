#include <iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  int n=5;
  int largest_element = INT_MIN;
  for(auto x:arr){
    if(x>largest_element)
      largest_element = x;
  }
  return largest_element;
}
