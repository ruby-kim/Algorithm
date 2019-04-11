#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack <int> s;
	s.push(3);
	s.push(2);
	s.push(1);

	cout << "size: " << s.size() << endl; //스택의 사이즈 반환

	cout << s.top() << endl; //스택의 맨 위 반환
	s.pop(); //스택의 맨 위 삭제

	cout << s.top() << endl; //스택의 맨 위 반환
	s.pop(); //스택의 맨 위 삭제

	cout << s.top() << endl; //스택의 맨 위 반환
	s.pop(); //스택의 맨 위 삭제

	return 0;
}