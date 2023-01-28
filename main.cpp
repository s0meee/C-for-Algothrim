#include <bits/stdc++.h>
//C++의 모든 표준라이브러리가 포함된 헤더파일을 포함 시킴
//프로그램에 포함
using namespace std;
//std라는 namespace를 사용
//네임스페이스 - 변수명 중복 방지를 위해 변수명에 범위를 걸어 놓은 것
typedef long long ll;
//long long 이라는 타입을 ll으로 별칭
double a = 1.23456789;
//double이라는 타입을 가진 a라는 변수에 1.23456789값을 할당
int b = 2;
//int라는 타입을 가진 b라는 변수에 2할당
int main(){
  printf("%.6lf\n",a);
  // double 형 출력
  //소수점 6자리까지 출력
  printf("%02d\n",b);
  //원하는 자리수만큼 비면 0을 앞에 붙여서 출력하기
  //2자릿수 만큼 출력, 만약 a이 한자리수 일경우 앞에 0을 붙여서 출력함
  return 0;
  //main함수 종료
  //프로세스 정상적 마무리
}
//1.234568
//02
