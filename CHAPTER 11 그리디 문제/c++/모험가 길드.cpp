#include <bits/stdc++.h>
using namespace std;

int main(void) {   
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> v;

  for(int i = 0 ; i<n;i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }  

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  int cnt = 0;
  for(int i = 0;i<v.size();) {
    i+=v[i];
    cnt++;
  }

  cout << cnt;
}

 
