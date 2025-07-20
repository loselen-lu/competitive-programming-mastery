#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> problems) {
    int res = 0;

    for (auto i : problems) {
        int count = 0;

        for (int j : i) {
            count += j;
        }

        if (count >= 2) {
            res++;
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> problems(n, vector<int>(3));
    for (auto& i : problems) {
        for (int& j : i) {
            cin >> j;
        }
    }

    cout << solution(problems) << '\n';

    return 0;
}
