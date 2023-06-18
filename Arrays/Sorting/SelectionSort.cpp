#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++)
    {
        int min = arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main(){
    int arr[6] = {4,2,6,3,9,8};

    selectionSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout <<arr[i] << " ";
    }

}