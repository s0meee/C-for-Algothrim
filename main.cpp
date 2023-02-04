#include <bits/stdc++.h>
using namespace std;
int main(){
  double ret = 2.12345;
  int n = 2;
  int a = (int)round(ret/double(n));
  cout << a << '\n';
  return 0;
}
//ret이란 double 타입에 int인 n을 연산해주기 위해서 
//(바꿀타입) 기존 변수 
//형 변환 계산을 진행 