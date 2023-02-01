#include<bits/stdc++.h>
//c++의 모든 표준라이브러리를 포함하는 헤더파일
//헤더파일을 include시킴
//프로그램에 포함 시킴
using namespace std;
//std라는 네임스페이스를 사용
//네임스페이스 : 변수명의 중복을 방지하기 위해 변수명의 범위 걸어 놓는 것
string a[2] = {"out of time", "i love you"};
int main(){
for(string b : a) cout << b << '\n';
  //vector a내의 요소인 string 타입의 요소를 탐색한다
for(int i = 0; i < 2; i++) cout << a[i] << "\n";
}
