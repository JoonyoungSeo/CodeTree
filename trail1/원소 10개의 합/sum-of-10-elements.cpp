#include <iostream>
using namespace std;

int main() {
    int input[10];
    int sum = 0;
    for (int i = 0; i <10; i++)
    {
        cin >> input[i];
        sum += input[i];
    }
    cout << sum;
    return 0;
}