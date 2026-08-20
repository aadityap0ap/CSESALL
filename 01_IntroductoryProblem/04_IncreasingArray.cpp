#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long prev;
    cin >> prev;

    long long ans = 0;

    for (int i = 1; i < n; i++) {
        long long curr;
        cin >> curr;
        if (curr < prev) {
            ans += prev - curr;
            curr = prev;
        }
        prev = curr;
    }
    cout << ans << endl;

    return 0;
}