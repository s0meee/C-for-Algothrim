#include <bits/stdc++.h>
using namespace std;
int i;
int main(){
  cout << &i << '\n';
  i = 0;
  cout << &i << '\n';
  return 0;
}
// i에 0 할당
//예약한 메모리 영역에 해당 값 저장
//메모리에 어떤값을 넣어도 주소는 변하지 않음 