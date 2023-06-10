#include<iostream>
using namespace std;

string evenOdd(int n){
  if(n%2 == 0) return "even"; 
  return "odd";
}

int main(){

  int n;
  cin>>n;
  cout << evenOdd(n);

  return 0;
}