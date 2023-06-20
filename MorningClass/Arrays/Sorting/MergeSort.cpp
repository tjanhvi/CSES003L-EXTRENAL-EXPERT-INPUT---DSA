#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
  int mid = s + (e-s)/2;

  //left array length
  int len1 = mid-s+1;

  //right array length
  int len2 = e - mid;

  //create 2 new array
  int *first = new int[len1];
  int *second = new int[len2];

  //copy value
  //left array
  int k = s;
  for(int i=0;i<len1;i++){
    first[i] = arr[k++];
  }

  //right array
  k = mid+1;
  for(int i=0;i<len2;i++){
    second[i] = arr[k++];
  }

  //after values are copied in new arrays
  int index1 = 0;
  int index2 = 0;
  
  k=s;
  while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
      arr[k++] = first[index1++];
    }
    else{
      arr[k++] = second[index2++];
    }
  }

  while(index1 < len1){
    arr[k++] = first[index1++];
  }

  while(index2 < len2){
    arr[k++] = second[index2++];
  }

}

void mergeSort(int *arr, int s, int e){
  if(s>=e) return;

  int mid = s + (e-s)/2;

  mergeSort(arr, s, mid);
  mergeSort(arr, mid+1, e);

  merge(arr, s, e);
}



int main(){
  int arr[5] = {2,5,1,6,9};
  int n = 5;

  mergeSort(arr, 0, n-1);

  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }cout << endl;

  return 0;
}