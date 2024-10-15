#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long a[n];
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    long long s = n * (n + 1) / 2;
    cout << s - sum;
    return 0;
}