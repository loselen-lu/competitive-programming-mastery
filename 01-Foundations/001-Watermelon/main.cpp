#include <iostream>

using namespace std;

string solution(int n) {
    if (n - 2 > 0 && (n - 2) % 2 == 0) {
        return "YES";
    }

    return "NO";
}

int main() {
    int n;
    cin >> n;

    cout << solution(n) << '\n';

    return 0;
}
