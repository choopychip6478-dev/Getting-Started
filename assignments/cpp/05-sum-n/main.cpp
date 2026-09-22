#include <iostream>
using namespace std;

int main() {
    long long o1,t2;
    cin >> o1 >> t2;
    for (int i = 1, t3; i < o1; ++i) cin >> t3, t2 += t3; {
    long long t3;
    cin >> t3;
    t2 += t3;
    cout << t2;
    }
    return 0;
}
