/*
1. 3���� ���� ���� ���� ���� �� �ڸ������� 0~9���� ���� �� �� ���Դ����� ����ϸ� �Ǵ� ������.
2. �̷��� ������ ������ �����ϰ� �װ��� ����ϴ� ���� �迭 -> �� ���� �ּҿ� �ش�Ǵ� ������ ������ �˾ƺ��� �Ǵ� ������
3. �迭 �ε���, ������ ���� 
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
