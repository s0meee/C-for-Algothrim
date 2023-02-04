#include <bits/stdc++.h>
using namespace std;
int main(){
  string a = "abcda";
  string * b = &a; //주소를 담은 포인터
  cout << b << '\n';
  cout << *b << '\n'; // 포인터 역참조 연산자
  // 값을 참조 함
  return 0;
}