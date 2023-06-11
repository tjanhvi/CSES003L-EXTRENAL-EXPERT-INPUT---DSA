#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int x){
  for(int i=0;i<n;i++){
    if(arr[i] == x){
      cout << "Array element found at index: " << i ;
      return; 
    } 
  }
  cout << "Array element not found";
}

int main(){

  int x;
  cin >> x;

  int arr[6] = {4,2,8,3,10,-2};

  linearSearch(arr, 6, x);  

  return 0;
}