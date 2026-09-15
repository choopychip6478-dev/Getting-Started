#include <iostream>
using namespace std;

int main() {
    long long o1,t2;
    cin >> o1 >> t2;
    for (int i = 1, t3; i < o1; ++i) cin >> t3, t2 += t3;
    return 0;
}
