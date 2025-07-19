#include <iostream>
#include <vector>

using namespace std;

string solution(string s) {
    int size = s.size();

    if (size <= 10) {
        return s;
    }

    return s[0] + to_string(size - 2) + s[size - 1];
}

int main() {
    int n;
    cin >> n;

    vector<string> ans(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        ans[i] = solution(s);
    }

    for (auto i : ans) {
        cout << i << '\n';
    }

    return 0;
}
