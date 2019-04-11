#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue <int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	cout << "size: " << q.size() << endl; //큐의 사이즈 반환

	cout << q.front() << endl; //큐의 맨 앞 반환
	q.pop(); //큐의 맨 앞 삭제

	cout << q.front() << endl; //큐의 맨 앞 반환
	q.pop(); //큐의 맨 앞 삭제

	cout << q.front() << endl; //큐의 맨 앞 반환
	q.pop(); //큐의 맨 앞 삭제

	return 0;
}
