#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v; //비어있는 vector v를 생성

	v.push_back(21); //마지막 원소 뒤에 원하는 원소(여기서는 21) 삽입
	v.push_back(32);
	v.push_back(53);
	v.push_back(64);
	v.push_back(15);

	//ex1) 멤버형식 size_type 이용한 반복
	cout << "ex1-1) [ v.at(i) ] size_type: "; //v.at(idx): idx번째 원소를 참조. v[idx]보다 속도는 느리지만, 범위를 점검하여 안전함
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v.at(i) << " ";
	cout << endl;

	cout << "ex1-2) [ v[i] ]    size_type: "; //v[index]: idx번째 원소를 참조. 범위를 점검하지 않아 속도가 v.at(idx)보다 빠르다
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;


	//ex2) int i를 이용한 반복
	cout << "ex2-1) [ v.at(i) ] int: ";
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << " ";
	cout << endl;

	cout << "ex2-2) [ v[i] ]    int: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;


	//ex3) 반복자 iterator를 이용한 반복
	cout << "ex3)   [ *iter ]   iterator: ";
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) //begin(): 첫번째 원소를 가리킨다. iterator와 사용
		cout << *iter << " "; //end(): 마지막의 "다음"을 가리킨다. iterator와 사용
	cout << endl << endl;

	return 0;
}