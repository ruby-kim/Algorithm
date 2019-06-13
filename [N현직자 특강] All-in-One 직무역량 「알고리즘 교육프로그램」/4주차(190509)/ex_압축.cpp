#include <iostream> 
#include <string> 
#include <vector> 
#include <map> 

using namespace std;

vector<int> solution(string msg) 
{
	vector<int> answer;
	map<string, int> dict;

	for (int i = 0; i < 26; i++) {
		string temp = "";
		temp += (char)('A' + i);
		dict[temp] = i + 1; //영문 대문자 색인 초기화 
	}

	map<string, int>::iterator found;

	int i = 0;
	int j = 0;

	while (j < msg.size()) {
		string curr;
		curr += msg[i];
		string before = "";

		if (j == msg.size() - 1) { //가장 긴 w를 찾을 필요 없이 그 자체가 가장 길 경우 
			answer.push_back(dict.find(curr)->second);
			break;
		}

		for (j = i + 1; j < msg.size(); j++) {
			before = curr;
			curr += msg[j];
			found = dict.find(curr);

			if (found != dict.end()) {
				if (j == msg.size() - 1) { //더이상 찾을 수 있는 범위를 벗어날 경우 
					answer.push_back(dict.find(curr)->second);
				}
				continue; //가장 긴 w를 찾기 위해서 
			}
			else {
				answer.push_back(dict.find(before)->second);
				i = j;
				int k;
				k = dict.size();
				dict[curr] = k + 1;
				break;
			}
		}
	}

	return answer;
}

int main()
{
	string msg;
	vector<int> result;

	cin >> msg;

	result = solution(msg);

	vector<int>::iterator iter;
	for (iter = result.begin(); iter != result.end(); iter++)
		cout << *iter << " ";

	cout << endl;

	return 0;
}


