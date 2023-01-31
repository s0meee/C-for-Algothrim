#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter) {
vector<string> ret;
long long pos = 0;
string token = "";
//input에서 delimiter를 찾습니다. 못 찾을 때까지는 이 루프는 반복됩니다.
while ((pos = input.find(delimiter)) != string::npos){
token = input.substr(0, pos);
  //해당 pos까지 해당 부분 문자열을 추출
  //abcd에서 d찾았으면, pos 는 3을 반환
  //3만큼 substr - abc추출
  //substr -특정크기 특정문자열 추출
ret.push_back(token);
  //추출한 문자열 ret이란 배열에 집어넣음
input.erase(0, pos + delimiter.length());
  // 앞에서부터 문자열 지움
  //abcdabc에서 d가 delimeter라면, pos=3
  //delimeter사이즈는 1
  //앞에서부터 4의 크기의 문자열을 제거해 abc만 남게됨
}
ret.push_back(input);
return ret;
}
int main(){
string s = "안녕하세요 저는 00입니다.!", d = " ";
vector<string> a = split(s, d);
for(string b : a) cout << b << "\n";
}