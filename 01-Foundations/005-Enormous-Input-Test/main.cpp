#include <iostream>
#include <vector>

using namespace std;

void io_optimizer() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int solution(vector<int> nums, int divisor) {
    int res = 0;

    for (int i : nums) {
        if (i % divisor == 0) {
            res++;
        }
    }

    return res;
}

int main() {
    io_optimizer();

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int& i : nums) {
        cin >> i;
    }

    cout << solution(nums, k) << '\n';

    return 0;
}
