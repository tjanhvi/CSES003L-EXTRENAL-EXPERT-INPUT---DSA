#include<bits/stdc++.h>
using namespace std;

void dnfSort(vector<int>& arr){
  int low=0, mid=0, high=arr.size()-1;    
  
  while(mid <= high){
    if(arr[mid] == 0){      
      swap(arr[mid], arr[low]);
      mid++; low++;
    }
    else if(arr[mid] == 1){
      mid++;
    }
    else{
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

int main(){
  vector<int> arr = {2, 1, 0, 1, 0, 2, 0, 0};
  int n = arr.size();

  dnfSort(arr);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}