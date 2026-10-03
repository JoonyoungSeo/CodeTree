#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 8;
    double sum = 0;
    double arr[8];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = sum / n;

    cout << fixed << setprecision(1) << avg;
    return 0;
}