#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double sum = 0;
    double avg = 0;
    double arr[5];
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;

    cout << fixed << setprecision(1) << avg << endl;
    if (avg >= 4.0){
        cout << "Perfect" << endl;
    }
    else if (avg >= 3.0){
        cout << "Good" << endl;
    }
    else{
        cout << "Poor" << endl;
    }
    return 0;
}