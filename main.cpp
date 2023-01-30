#include <bits/stdc++.h>
using namespace std;
int main(){
string a = "It's hard to have a sore leg";
reverse(a.begin(), a.end());
cout << a << '\n';
  //reverse(문자열 첫번 째, 문자열 마지막 째)
  //gel eros a evah ot drah s'tI
reverse(a.begin(), a.end());
cout << a << '\n';
  //It's hard to have a sore leg
reverse(a.begin() + 3, a.end());
cout << a << '\n';
  //It's hard to have a sore leg
  //0123 
  //3번째 s부터 뒤집기 시작
  //It'gel eros a evah ot drah s
return 0;
}