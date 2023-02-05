#include <bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];
int main() {
memset(a, -1, sizeof(a));
memset(a2, 0, sizeof(a2));
for(int i = 0; i < 10; i++) cout << a[i] << " ";
return 0;
}
//간편하게 초기화 
//0,-1로 초기화 될때 memset쓰는 것이 좋음