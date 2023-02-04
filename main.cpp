#include <bits/stdc++.h>
using namespace std;
int i;
string s = "Somi";
int main(){
  i = 0;
  int * a = &i;
  cout << a << '\n';
  string * b = &s;
  cout << b << '\n';
  return 0;
}
//포인터의 크기 고정되지 X
//1바이트 짜리의 char타입 변수라고 해서 포인터의 크기가 1은 아님 