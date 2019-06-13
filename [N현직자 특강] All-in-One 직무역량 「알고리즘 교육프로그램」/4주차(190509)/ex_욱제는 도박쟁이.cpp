#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
        int N;
        cin >> N;

        long long sum = 0;

        //1라운드
        for (int i = 0; i < N; i++)
        {
                 int coin;
                 cin >> coin;
                 sum += abs(coin);
        }

        //2라운드
        for (int i = 0; i < N; i++)
        {
                 int coin;
                 cin >> coin;
                 sum += abs(coin);

        }

        cout << sum << "\n";

        return 0;
}

