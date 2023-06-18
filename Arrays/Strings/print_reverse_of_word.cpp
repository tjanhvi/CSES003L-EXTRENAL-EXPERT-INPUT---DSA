#include<bits/stdc++.h>
using namespace std;
int main(){
  char word[100];
  cin>>word;

  int len = strlen(word);
  int s = 0, e = len-1;
  while(s<=e){
    swap(word[s++], word[e--]);
  }

  cout << word;

  return 0;
}