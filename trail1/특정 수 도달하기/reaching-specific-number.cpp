#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int input[10];
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i <= 10; i++){
        cin >> input[i];
        if (input[i] >= 250){
            break;
        }
        sum += input[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << float(sum) / cnt << endl;
    return 0;
}