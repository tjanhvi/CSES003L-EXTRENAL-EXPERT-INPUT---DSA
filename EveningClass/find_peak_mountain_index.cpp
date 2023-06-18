#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n){
  int s=0;
  int e = n-1;

  while(s<e){
    int mid = s + (e-s)/2;
    if(arr[mid] < arr[mid+1]){
      s = mid + 1; 
    }
    else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }

  return s;
}

int main(){
  int arr[6] = {1,2,5,6,4,3};
  int idx = peakElement(arr,6);

  cout << "Peak element is at index: " << idx;


  return 0;
}