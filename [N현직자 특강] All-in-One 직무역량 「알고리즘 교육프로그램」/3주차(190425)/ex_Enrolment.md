#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

int K, L;
map<int, int> A;
map<int, int>::iterator it;
vector<pair<int, int> > B;

int main()
{
	scanf("%d%d", &K, &L);
	for (int i = 1; i <= L; i++){
		int s; scanf("%d", &s);
		A[s] = i;
	}
	for (it = A.begin(); it != A.end(); it++)
		B.push_back(make_pair(it->second, it->first));
	
	//수강 신청 순서 기준으로 정렬
	sort(B.begin(), B.end());
	
	//수강 신청에 성공한 학생이 수강 가능 정원보다 적은 경우를 고려해야 함
	int num = min(K, int(B.size()));
	
	for (int i = 0; i < num; i++)
		printf("%d\n", B[i].second);

	return 0;
}
