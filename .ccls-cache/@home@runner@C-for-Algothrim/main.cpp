#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
  for (int i = 1; i <= 5; i++)
    v.push_back(i);
  for (int i = 0; i < 5; i++) {
    cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
    cout << &*(v.begin() + i) << '\n';
  }
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << ' ';
  }
  cout << '\n';
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << ' ';
  }
  auto it = v.begin();
  advance(it, 3);
  cout << '\n';
  cout << *it << ' ';
  // cout << v.begin() << '\n'; 에러
}
//auto - vector<int>::iterator 같이 사용
//이터레이터  : 컨테이너에 저장된 요소의 주소 가리키는 객체, 포인터 일반화