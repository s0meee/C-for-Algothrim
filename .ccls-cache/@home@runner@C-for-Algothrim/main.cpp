#include <bits/stdc++.h>
using namespace std;
//std라는 이름을 가진 namespace 사용
//네임스페이스란 변수명 중복 방지를 위해 변수명에 범위를 걸어 놓는 것 
int T;
//문자열 변수 선언 <타입><변수명>
//int라는 타입을 가진 T라는 변수
int main(){
  cin >> T;
  //T개 만큼 getline의 입력을 받아오는 상황
  //개행 문자 직전가지 입력을 받게 되고, 중간에 위치한 버퍼에 \n이 남게 됨
  string bufferflush;
  getline (cin,bufferflush);
  //버퍼에 남은 \n을 없애기 위해 getline(cin,bufferflush)해줘야함
  for (int=0; int < T; int++) {
    getline(cin,s);
    cout << s << "\n";
    //변수 s출력
  }
  return 0;
  //main함수 종료
  //프로세스 정상적 마무리
}

