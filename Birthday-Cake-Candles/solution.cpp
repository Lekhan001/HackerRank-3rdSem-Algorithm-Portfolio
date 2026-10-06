#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++)
        cin >> candles[i];

    int maximum = *max_element(candles.begin(), candles.end());
    int count = 0;

    for (int x : candles) {
        if (x == maximum)
            count++;
    }

    cout << count;

    return 0;
}
