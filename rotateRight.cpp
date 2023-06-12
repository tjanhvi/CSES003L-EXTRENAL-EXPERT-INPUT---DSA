#include<iostream>
using namespace std;

void rotateRight(int arr[], int n){  
  int x = arr[n-1];  
  for (int i = n - 1; i > 0; i--){
    arr[i] = arr[i - 1];
  }
  arr[0] = x;

}


void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){

  
  int arr[6] = {4,2,8,3,10,-2};

  rotateRight(arr, 6);

  printArray(arr, 6);

  return 0;
}