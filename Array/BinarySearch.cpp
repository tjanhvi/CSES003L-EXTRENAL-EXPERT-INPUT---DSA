#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
  int start = 0;
  int end = n-1;
  int mid = (start+end)/2;
  
  while(start <= end){
    
    if(arr[mid] == key){
      return mid;
    }
    if(arr[mid] < key){
      start = mid+1;
    }
    else{
      end = mid-1;
    }

    mid = (start+end)/2;
  }
  return -1; 
}

int main(){
  int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 23;
  int result = binarySearch(arr, n, key);

  if (result == -1) {
    cout << "Element not found." << endl;
  }
  else {
    cout << "Element found at index " << result << "." << endl;
  }

  return 0;
}