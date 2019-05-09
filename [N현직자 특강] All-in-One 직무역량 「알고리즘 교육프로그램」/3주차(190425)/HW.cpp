/* 문제: 1E-자동화 로봇
소규모 공장을 운영하고 있는 지수는 최근 자동화 로봇 한 대를 구매했다.
로봇은 매일 정비와 가동 준비가 필요해서 하루 8시간 동안만 작업을 처리할 수 있다.
지수는 번거로운 반복 작업을 모두 로봇으로 대체하려고 한다.
지수는 로봇이 기한 내에 모든 작업을 처리할 수 있을 지 궁금해졌다.
지수는 처리해야 할 N개의 작업들에 대해 다음과 같은 정보들을 알고 있다.

1. Si: 각 작업의 시작 가능 날짜
2. Ei: 각 작업의 마감 기한 날짜
3. Wi: 각 작업에 소요되는 시간

로봇은 1번째 날부터 바로 작업을 시작할 수 있으며, 하루에 정확히 8시간의 작업을 할 수 있다.
동시에 하나의 작업만을 수행할 수 있으며, 작업 도중 다른 작업으로 전환하는 것은 자유롭다.
모든 작업은 시작 가능 날짜에서부터 마감 기한 날짜까지의 기간내에만 작업할 수 있다.
시작 당일이나 마감 당일에도 물론 작업을 할 수 있다.
N개의 작업들에 대한 정보가 주어졌을 때,
모든 작업을 마감기한 내에 완료할 수 있는지 여부를 판단하는 프로그램을 작성하시오.

Job#1: Si=1 / Ei=5 / Wi=16
Job#2: Si=2 / Ei=4 / Wi=4
Job#3: Si=3 / Ei=4 / Wi=16
Job#4: Si=1 / Ei=2 / Wi=4
Job#5: Si=4 / Ei=6 / Wi=4
*/

/* [입력형식]
첫 줄에는 테스트케이스의 수를 나타내는 1 이상 5 이하의 자연수 T가 주어진다.
이후 총 T개의 테스트케이스에 대한 입력이 차례로 주어진다.
각 테스트케이스의 첫 줄에는 처리해야 할 작업의 수를 나타내는 자연수 N이 주어진다.

- N은 1 이상 20 이하의 자연수이다.

이후 총 N 줄에 걸쳐 작업들에 대한 정보가 한 줄에 하나씩 주어진다. 작업에 대한
정보는 Si Ei Wi 형식으로 공백으로 구분된 세 개의 자연수로 주어진다.

- Si, Ei, Wi 는 모두 1 이상 10 억 이하의 자연수다.
- Si 는 항상 Ei 보다 작거나 같은 값을 가진다.
*/

/* [출력 형식]
각 테스트케이스별로 정답을 한 줄에 출력한다.
- 입력으로 주어진 N 개의 작업을 모두 기한 내에 처리할 수 있다면 Yes 를 출력한다.
- 그렇지 않다면 No 를 출력한다.
*/

/* 입출력 예시
3

3
1 3 8
2 2 8
3 3 8
4
1 2 10
2 4 20
1 3 5
3 4 5
5
1 5 16
2 4 4
3 4 16
1 2 4
4 6 4
--------
Yes
No
Yes
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

class Job
{
public:
	int start;
	int end;
	int worktime;

	bool operator <(Job& job) {
		return this->end < job.end;
	}
};

//yes, no 판별
bool check_fin(vector<Job> jobs, int n, int finDay)
{
	vector<Job> workQueue;
	for (int day = 1; day < finDay + 1; day++) {
		int dayWorkTime = 8;

		for (int i = 0; i < n; i++) { //시작날과 오늘날과 같으면 작업목록으로 배치
			if (jobs[i].start == day)
				workQueue.push_back(jobs[i]);
		}
		sort(workQueue.begin(), workQueue.end()); //마감날을 순차적으로 정렬

		for (vector<Job>::iterator iter = workQueue.begin(); iter != workQueue.end(); ) {
			
			// 하루 내 못 끝내면 남은 값 반환
			if (iter->worktime > dayWorkTime) {
				iter->worktime -= dayWorkTime;
				break;
			}

			// 하루 내 일을 끝내고도 시간이 남을 때 다음 작업으로 전환
			if (iter->worktime < dayWorkTime) {
				dayWorkTime -= iter->worktime;
				iter = workQueue.erase(iter);
			}

			// 하루 내 일할 양과 주어진 일의 양이 같다면 break
			if (iter->worktime == dayWorkTime) {
				iter = workQueue.erase(iter);
				break;
			}
		}
	}

	//작업결과에 따른 반환값 설정
	if (workQueue.size() == 0) return true;
	else return false;
}

int main()
{
	int T;
	int si, ei, wi;
	cin >> T;

	//입력
	for (int i = 0; i < T; i++) {
		int n = 0;
		int finDay = 0;
		cin >> n;

		vector<Job> jobs;

		for (int j = 0; j < n; j++) {
			cin >> si >> ei >> wi;

			Job jobinf;
			jobinf.start = si;
			jobinf.end = ei;
			jobinf.worktime = wi;
			jobs.push_back(jobinf);

			if (finDay < ei) finDay = ei;
		}

		bool result = check_fin(jobs, n, finDay); //yes, no 판별
		if (result == true) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
