#include<bits/stdc++.h>
using namespace std;
int main(){

  char name[100];

  cin>>name;

  int count = 0;

  // int length = strlen(name);
  for(int i=0;name[i]!='\0';i++){
    count++;
  }

  cout << count;

  return 0;
}