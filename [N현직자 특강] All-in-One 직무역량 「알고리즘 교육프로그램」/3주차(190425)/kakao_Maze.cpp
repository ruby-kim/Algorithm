#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

vector<int> arr1, arr2;
vector<string> ret;
vector<string> solution(int n, vector<int> a, vector<int> b)
{
	vector<string> res;
	for (int i = 0; i < n; i++){
		string st = "";
		int tmp = a[i] | b[i];
		for (int j = 0; j < n; j++){
			if (tmp % 2 == 0) st += " ";
			else st += "#";
			tmp = tmp >> 1;
		}
		reverse(st.begin(), st.end());
		res.push_back(st);
	}
	return res;
}

int main()
{
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		arr1.push_back(x);
	}
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		arr2.push_back(x);
	}
	ret = solution(n, arr1, arr2);
	for (int i = 0; i < n; i++){
		cout << ret[i] << endl;
	}
	return 0;
}
