#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> target;

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) {
            cout << mid;
            return 0;
        }

        if (a[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << -1;

    return 0;
}
