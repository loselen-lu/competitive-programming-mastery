#include <iostream>

using namespace std;
using ll = long long;

void print_weird_algo(int n) {
    ll cur_num = n;
    while (cur_num != 1) {
        cout << cur_num << ' ';
        if (cur_num % 2 == 0) {
            cur_num /= 2;
        } else {
            cur_num = 3 * cur_num + 1;
        }
    }
    cout << 1 << '\n';
}

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    int n;
    cin >> n;
    print_weird_algo(n);
    return 0;
}