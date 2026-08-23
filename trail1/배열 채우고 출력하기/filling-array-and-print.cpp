#include <iostream>
using namespace std;

int main() {
    char input[10];
    for (int i = 0; i < 10; i++){
        cin >> input[i];
    }
    for (int i = 9; i >= 0; i--){
        cout << input[i];
    }
    return 0;
}