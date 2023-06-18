#include<bits/stdc++.h>
using namespace std;

int floorNumber(vector<int>& arr, int target){
  int s = 0;
  int e = arr.size() - 1;  
  int floor = -1;

  while(s<=e){
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] < target){
      s = mid + 1;
      floor = mid;
      
    }
    else{
      e = mid - 1;
    }    
  }
  return floor;
}

int main(){

  int target;
  cin>>target;
  vector<int>arr = {7,9,11,14,16};

  int ans = floorNumber(arr, target);

  cout << ans;

  return 0;
}