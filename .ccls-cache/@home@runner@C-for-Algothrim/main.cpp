#include <bits/stdc++.h>>
//모든 표준 라이브러리가 포함된 헤더파일을 include를 통해 프로그램에 포함 시킨다.
using namespace std;
//std라는 네임스페이스를 사용한다.
//네임스페이스 : 변수명의 중복을 막기위해 변수의 사용범위를 지정해주는 것 
#define PI 3.14159
// #define <이름> <값>
//PI는 3.14159로 정의
#define loop(x,n) for(int x=0; x<n; x++)
//loop(x,n)은 for(int x=0; x<n; x++)로 정의 

int main(){
  cout << PI << '\n';
  //PI를 입력 받음
  int sum = 0;
  loop(i,10){
    sum += i;
  }
  //for(int x=0; x<10; x++)
  //0~9까지 loop문을 돈다.
  //sum +=1 은 sum = sum + 1과 같다.
  cout << sum << '\n';
  //sum을 출력함
  return 0;
  //main함수 종료 
}
