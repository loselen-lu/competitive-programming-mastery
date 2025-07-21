#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<string> fizzBuzz(int n) {
            vector<string> res;
            for (int i = 1; i <= n; i++) {
                string cur = "";

                if (i % 3 == 0) {
                    cur += "Fizz";
                }
                if (i % 5 == 0) {
                    cur += "Buzz";
                }
                if (i % 3 != 0 && i % 5 != 0) {
                    cur += to_string(i);
                }

                res.push_back(cur);
            }

            return res;
        }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    vector<string> res = sol.fizzBuzz(n);

    for (auto& i : res) {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
