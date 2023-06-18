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

int orderAgnoisticBS(vector<int> &arr, int target, int s, int e){
  bool isAsc = arr[s] < arr[e];

  while(s <= e){
    int mid = s + (e-s)/2;

    if(arr[mid] == target){
      return mid;
    }

    if(isAsc){
      if(arr[mid] < target)
        s = mid + 1;      
      else
        e = mid - 1;
    }

    else{
      if(arr[mid] < target)
        e = mid - 1;    
      else
        s = mid + 1; 
    }
  }
  return -1;
} 

int searchTarget(int arr[], int n, int target){
  int first = orderAgnoisticBS(arr, target, 0, peakElement(arr, n));
  if (first != -1){
    return first;
  }
  else{
    return orderAgnoisticBS(arr, target, peakElement(arr, n) + 1, n - 1);
  }
}

int main(){
  int target;
  cin >> target;
  int arr[] = {1, 2, 5, 6, 4, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int idx = peakElement(arr, size);

  cout << "Peak element is at index: " << idx << endl;

  int result = searchTarget(arr, size, target);
  cout << "Index of target element: " << result << endl;

  return 0;
}