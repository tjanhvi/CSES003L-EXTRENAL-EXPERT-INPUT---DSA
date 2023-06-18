#include<iostream>
using namespace std;
int main(){

  int var = 10;
  cout << &var << endl;

  int *ptr;
  ptr =  &var;

  cout << ptr << endl;
  cout << &ptr << endl;
  cout << *ptr << endl;


  return 0;
}