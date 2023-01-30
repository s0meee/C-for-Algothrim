#include <bits/stdc++.h>
//C++의 모든 표준 라이브러리가 포함된 헤더파일
//프로그램에 포함시킨다.
using namespace std;
//std라는 네임스페이스 사용
// 네임스페이스 - 변수명의 중복을 방지하기위해 변수명의 범위를 정함
int main() {
  ios_base :: sync_with_stdio(false);
  // c의 stdio와 cpp의 iostream을 동기화시켜주는 역할
  // 동기화 > 비활성화
  cin.tie(NULL);
  //입력
  cout.tie(NULL);
  //출력
  //입출력 속도 빨라짐
  //동기화를 끊음으로서 C++ stream들은 독립적인 buffer를 갖게됨
  //buffer의 수가 줄어들며 속도가 빨라짐
  char a = 'a';
  //char라는 타입을 가진 a라는 변수에 a할당
  cout << (int)a << '\n';
  //(int)a를 통해 문자열 char을 정수 int로 변환
  //문자 a는 97로 반환
  return 0;
  //main 함수 종료
  //프로세스 정상적 마무리
}