#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> v;

	v.push_back("Show Me"); //마지막 원소 뒤에 삽입
	v.push_back("Tiger JK");
	v.push_back("Dok2");
	v.push_back("GAEKO");
	v.push_back("ZICO");

	//ex4) v.front(), v.back()
	cout << "ex4) v.front(), v.back()" << endl;
	cout << "v.front(): " << v.front() << endl; //첫번째 원소 참조
	cout << "v.end(): " << v.back() << endl; //마지막 원소 참조
	cout << endl;


	//ex5) v.popback()
	cout << "ex5) v.popback()" << endl;
	vector<string>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";
	cout << endl;
	v.pop_back();
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";
	cout << endl << endl;


	//ex6) v.erase(iter)
	cout << "ex6) v.erase(iter)" << endl;
	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter == "Dok2") {
			v.erase(iter); //v.erase(iter): iter가 가리키는 원소 제거. size만 줄어들고 capacity(할당된 메모리)는 그대로 남는다
			break;
		}
	}
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " / ";
	cout << endl << endl;


	//ex7) v.size(), v.capacity()
	cout << "ex7) v.size(), v.capacity()" << endl;
	cout << "v.size(): " << v.size() << endl;
	cout << "v.capacity(): " << v.capacity() << endl;
	
	return 0;
}