/*
1. 3개의 수를 곱한 수에 대해 각 자릿수들이 0~9까지 각각 몇 번 나왔는지를 출력하면 되는 문제다.
2. 이렇게 각각의 개수를 저장하고 그것을 출력하는 것은 배열 -> 그 값의 주소에 해당되는 값들의 개수를 알아보면 되는 문제임
3. 배열 인덱스, 포인터 지정 
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {

	int count[10] = {};
	int a, b, c;

	cin >> a >> b >> c;

	int mul = a * b * c;

	string s = to_string(mul);

	for (char ch : s) {
		count[ch - '0']++;
	}

	for (int v : count) {
		cout << v << "\n";
	}
	return 0;


}
