#include <bits/stdc++.h>
using namespace std;
int main(){
string a = "love is";
a += " pain!";
a.pop_back();
  //pop_back : 문자열 끝까지 채움 
cout << a << " : " << a.size() << "\n";
  //size() : 문자열의 사이즈 반환
  //love is pain : 12
cout << char(* a.begin()) << '\n';
  //begin() : 문자열의 첫번째요소 가리키는 이터레이터 반환
  //l
cout << char(* (a.end() - 1)) << '\n';
  //end() : 문자열의 마지막요소 다음을 가리키는 이터레이터 반환
  //n
// string& insert (size_t pos, const string& str);
a.insert(0, "test ");
  //insert(위치,문자열) 
  //특정위치에 문자열 삽입
cout << a << " : " << a.size() << "\n";
// string& erase (size_t pos = 0, size_t len = npos);
    //test love is pain : 17
    //test : 01234 크기 : 5
a.erase(0, 5);
  //erase(위치,크기) : 특정위치에 크기만큼 문자열을 지움 
cout << a << " : " << a.size() << "\n";
// size_t find (const string& str, size_t pos = 0);
  //love is pain : 12
auto it = a.find("love");
  //find(문자열) : 특정 문자열 찾아 위치 반환
if (it != string::npos){
cout << "포함되어 있다." << '\n';
}
  //해당 문자열 못 찾을 경우, string :: npos 반환
  // 문자열을 찾지 못했을 경우가 아니다. 일때
  // 포함되어 있다 반환 
cout << it << '\n';
  //0 (love시작 0부터)
cout << string::npos << '\n';
    //포함 되어 있다.
    //string::npos - size_t 최대값 18446744073709551615
// string substr (size_t pos = 0, size_t len = npos) const;
cout << a.substr(5, 2) << '\n';
  //substr(위치,크기) : 특정위치에서 크기만큼의 문자열 추출
  //is
return 0;
}