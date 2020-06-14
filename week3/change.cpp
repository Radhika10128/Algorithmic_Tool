#include <bits/stdc++.h>
using namespace std;

int deno[]={1,5,10};
int n = sizeof(deno) / sizeof(deno[0]);
int get_change(int m) {
  sort(deno,deno+n);
  int count=0;
  for(int i=n-1;i>=0;i--)
  {
      while(m>=deno[i])
      {
          m-=deno[i];
          count++;
      }
  }
  return count;
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
