#include <bits/stdc++.h>
// C++의 모든 표준라이브러리가 포함된 헤더파일을 포함 시킴
//프로그램에 포함
using namespace std;
// std라는 namespace를 사용
//네임스페이스 - 변수명 중복 방지를 위해 변수명에 범위를 걸어 놓은 것
int a = 1;
//int라는 타입을 가진 a라는 변수에 1 할당
char s = 'a';
//char이라는 타입을 가진 s라는 변수에 a 할당
string str = "어벤져스";
//string 이라는 타입을 가진 str라는변수에 어벤져스 할당
double b = 1.223123;
//double 이라는 타입을 가진 b라는 변수에 1.223123 할당

int main() {
  printf("아이엠 아이언맨 : %d\n", a);
  //%d, int 타입
  printf("아이엠 아이언맨 : %c\n", s);
  //%c, char 타입
  printf("아이엠 아이언맨 : %s\n", str.c_str());
  //%s, string 타입
  printf("아이엠 아이언맨 : %lf\n", b);
  //%lf, double 타입
  return 0;
  //프로세스 정상적 마무리
  //main 함수 종료
}
