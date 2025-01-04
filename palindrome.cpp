#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int reverse = 0;
    int temp = n;
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (reverse == n);
}

int main() {
    int n = 12321;
    if (checkPalindrome(n) == 1) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
    return 0;
}