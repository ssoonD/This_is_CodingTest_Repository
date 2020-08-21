#include <bits/stdc++.h>
using namespace std;

int main(void) {   
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  string s;
  cin >>s;

  int num = s[0] - '0';

  for(int i = 1;i<s.length();i++) {
    if (num <= 1) {
      num += s[i] - '0';
    }else{
      num *= s[i] - '0';
    }
  }

  cout << num;
}
