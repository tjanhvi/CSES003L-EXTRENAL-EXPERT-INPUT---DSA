#include<iostream>
#include<climits>
using namespace std;
int getmax(int a[], int n){
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
return max;

}

int getmin(int a[], int n){
    int min= a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
return min;
}

void update(int a[], int n){
    a[0]=100;
    cout<<"priniting from update function"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    /*int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    for(int i:a){
        cout<<i<<" ";
    }*/

    //sizeof(a)/sizeof(int)

    int size;
    cin>>size;
    int array[size]; //2,10,13,1,-3
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Mximum element: "<<getmax(array, size)<<" ";
    cout<<"Minimum element: "<<getmin(array, size)<<" ";
    update(array, size);

    cout<<"priniting from main function"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

}  