#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n, h, t;
    cin >> n >> h >> t;
    
    int min_cost = INT_MAX;

    int arr[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i <= n-t; i++) {
        int cost = 0;
        for (int j = i; j < i+t; j++){
            cost += abs(arr[j] - h);
        }
        min_cost = min(min_cost, cost);
    }
    cout << min_cost;
    return 0;
}