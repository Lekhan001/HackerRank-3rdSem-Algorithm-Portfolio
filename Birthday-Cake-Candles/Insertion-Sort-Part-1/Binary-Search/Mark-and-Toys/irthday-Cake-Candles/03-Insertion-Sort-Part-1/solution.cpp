#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int value = a[n - 1];
    int i = n - 2;

    while (i >= 0 && a[i] > value) {
        a[i + 1] = a[i];

        for (int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << "\n";

        i--;
    }

    a[i + 1] = value;

    for (int j = 0; j < n; j++)
        cout << a[j] << " ";

    return 0;
}
