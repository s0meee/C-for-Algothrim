#include <bits/stdc++.h>
using namespace std;
int a[5], temp[5];
int main(){
  for(int i = 0; i < 5; i++)a[i] = i;
  memcpy(temp, a, sizeof(a));
  for(int i : temp) cout << i << ' ';
  cout << '\n';
  // 원본 배열 a를 수정하여 출력하는 로직
  // a를 수정해서 더하는 로직
  a[4] = 1000;
  for(int i : a) cout << i << ' ';
  cout << '\n';
  // 그 다음 다시 temp를 기반으로 원본배열을 담아 둠.
  memcpy(a, temp, sizeof(temp));
  for(int i : a) cout << i << ' ';
  cout << '\n';
  return 0;
}
