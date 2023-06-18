#include<bits/stdc++.h>
using namespace std;

string reverse(string word){
  string reverse_word = word;
  reverse(reverse_word.begin(), reverse_word.end());
  return reverse_word;
}

int main(){
  string word;
  cin>>word;

  string reverse_word = reverse(word);

  
  if(word == reverse_word){
    cout << "Palindrome";
  }
  else{
    cout << "Not a plaindrome";
  }
  
  return 0;
}