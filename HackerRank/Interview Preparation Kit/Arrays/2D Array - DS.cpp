#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int res = 0;
    int flag = 0;

    for (int y = 1; y < arr.size() - 1; y++)
    {
        for (int x = 1; x < arr[y].size() - 1; x++)
        {
            int sum = arr[y - 1][x - 1] + arr[y - 1][x] + \
                        arr[y - 1][x + 1] + arr[y][x] + \
                        arr[y + 1][x - 1] + arr[y + 1][x] + \
                        arr[y + 1][x + 1];
            if (!flag)
            {
                flag = 1;
                res = sum;
            }
            res = res > sum? res : sum;
        }
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
