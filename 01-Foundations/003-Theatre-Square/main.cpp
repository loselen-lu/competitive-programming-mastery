#include <iostream>

using namespace std;

int ceiling_div(int a, int b) {
    return (a - 1) / b + 1;
}

long long solution(int a, int b, int c) {
    return 1LL * ceiling_div(a, c) * ceiling_div(b, c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << solution(a, b, c) << '\n';

    return 0;
}
