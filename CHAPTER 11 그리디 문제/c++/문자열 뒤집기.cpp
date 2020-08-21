#include <bits/stdc++.h>
using namespace std;

int main(void) {   
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  string s;
  cin >>s;

  int count0 = 0;
  int count1 = 0;

  if (s[0] == '0') {
    count0++;
  } else {
    count1++;
  }

  for(int i = 0;i<s.length()-1;i++) {
    if (s[i] == '0' && s[i] != s[i+1]) {
      count1++;
    }

    else if (s[i] == '1' && s[i] != s[i+1]) {
      count0++;
    }
  }

  cout << min(count0,count1);
}
