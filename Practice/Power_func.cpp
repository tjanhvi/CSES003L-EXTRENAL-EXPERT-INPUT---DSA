#include<iostream>
using namespace std;

int power(int n, int pow){
  int ans = 1;
  for(int i=1;i<=pow;i++){
    ans = ans*n;
  }
  return ans;
}

int main(){

  int base, exp;
  cin>>base>>exp;

  cout << power(base, exp); 

  return 0;
}