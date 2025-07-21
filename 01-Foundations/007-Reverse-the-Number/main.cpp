#include <iostream>
#include <vector>
#include <string>

using namespace std;

void remove_leading_zero(string& s) {
    s = to_string(stoi(s));
}

vector<string> solution(const vector<int>& nums) {
    vector<string> res;

    for (int i : nums) {
        string cur;
        cur = to_string(i);
        string temp(cur.size(), '0');

        for (int j = cur.size() - 1; j >= 0; j--) {
            temp[cur.size() - 1 - j] = cur[j];
        }

        remove_leading_zero(temp);
        res.push_back(temp);
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int& i : nums) {
        cin >> i;
    }

    vector<string> res = solution(nums);

    for (string& s : res) {
        cout << s << '\n';
    }

    return 0;
}
