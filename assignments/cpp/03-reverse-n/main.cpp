#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int splat[n];
    for (int i = 0; i < n; ++i)
        cin >> splat[i];
    for (int i = n-1; i >= 0; --i)
        cout << splat[i] << " ";
    return 0;
}