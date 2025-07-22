#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int missing(vector<int>& nums) {
    int og_size = nums.size() + 1;
    ll og_sum = 1LL * og_size * (og_size + 1) / 2;
    ll sum = 0;
    for (int i : nums) {
        sum += i;
    }
    return og_sum - sum;
}

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int& i : nums) {
        cin >> i;
    }
    cout << missing(nums) << '\n';
    return 0;
}