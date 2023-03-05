#include <iostream>
using namespace std;
int n, add, current = 100, maxValue = 100;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> add;
        current += add;
        if(current > maxValue) {
            maxValue = current;
        }
    }
    cout << maxValue << endl;
    return 0;
}