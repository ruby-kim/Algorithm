#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long cnt_a(string s, long size)
{
    long res = 0;
    for (int i = 0; i < size; i++)
        if (s[i] == 'a')
            res++;
    return res;
}

long repeatedString(string s, long n) {
    long size = s.size();
    long quotient = n / size;
    long remainder = n % size;

    long origin_cnt = cnt_a(s, size);
    
    if (!remainder)
        return origin_cnt * quotient;
    else
    {
        long tmp_cnt = cnt_a(s, remainder);
        return origin_cnt * quotient + tmp_cnt;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
