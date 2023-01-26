#include <bits/stdc++.h>
//헤더파일 include시키다.
//C++의 모든 표준라이브러리 포함된 헤더파일
//프로그램에 포함시키다.
using namespace std;
//std 라는 namespace를 사용함
//namespace는 변수명 중복 방지를 위해 변수명에 범위 걸어 놓는 것
int a;
//int라는 타입을 가진 a라는 변수
double b;
//double라는 타입을 가진 b라는 변수
char c;
//char라는 타입을 가진 c라는 변수
int main(){
  scanf("%d %lf %c", &a, &b, &c);
  //매개변수 
  //%d : int
  //%lf : double 
  //%c : char
  printf("%d\n", a);
  printf("%lf\n", b);
  printf("%c\n", c);
  return 0;
}
//입력형식이 까다로울때 사용
//출력 : 23330
//       233.23123
//       