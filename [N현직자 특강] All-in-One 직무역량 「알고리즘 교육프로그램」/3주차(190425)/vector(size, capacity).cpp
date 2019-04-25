#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;

	cout << "[ v[i], v.size(), v.capecity() ]" << endl;

	// size(): 데이터가 채워진 원소의 개수 리턴
	// capacity(): 할당된 메모리 공간 크기 리턴. 2^n제곱으로 증가

	for (int i = 0; i <= 64; i++) {
		v.push_back(i + 1);
		cout << "[" << v[i] << "," << v.size() << "," << v.capacity() << "," << "]" << endl;
	}
	return 0;
}