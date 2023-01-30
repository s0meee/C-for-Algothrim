#include <bits/stdc++.h>
//C++의 모든 표준 라이브러리가 포함된 헤더파일
//프로그램에 포함시킨다.
using namespace std;
//std라는 네임스페이스 사용
// 네임스페이스 - 변수명의 중복을 방지하기위해 변수명의 범위를 정함
typedef long long ll;
//타입 별칭 지정
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s = "123"; 
  s[0]++;
  //코드 123에서 s[0]에 1을 더해 223
  //아스키코드 49에 1더한 값 50
  cout << s << "\n";
  //
  return 0;
}