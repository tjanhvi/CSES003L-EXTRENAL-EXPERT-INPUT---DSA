#include <iostream>
#include <vector>
using namespace std;

int firstPosition(vector<int> arr, int k) {
  int s = 0, e = arr.size() - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    if (arr[mid] == k) {
      ans = mid;
      e = mid - 1;
    } else if (arr[mid] < k) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}


int lastPosition(vector<int>arr, int k){
  int s=0, e=arr.size()-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s<=e){
      if(arr[mid] == k){
          ans = mid;
          s = mid+1;
      }
      else if(arr[mid] < k){
          s = mid+1;
      }
      else{
          e = mid-1; 
      }
      mid = s + (e-s)/2;
  }  
  return ans;
}

int main() {
  int x;
  cin>>x;
  vector<int> arr = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };  
  int result1 = firstPosition(arr, x);
  cout << "First position of " << x << " is: " << result1 << endl;
  int result2 = lastPosition(arr, x);
  cout << "Last position of " << x << " is: " << result2 << endl;
  return 0;
}
