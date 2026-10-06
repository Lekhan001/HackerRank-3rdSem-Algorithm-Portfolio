#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> prices(n);

    for (int i = 0; i < n; i++)
        cin >> prices[i];

    sort(prices.begin(), prices.end());

    int count = 0;

    for (int price : prices) {
        if (k >= price) {
            k -= price;
            count++;
        } else {
            break;
        }
    }

    cout << count;

    return 0;
}
