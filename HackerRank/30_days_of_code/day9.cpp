#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    // Complete this function
    long long num = 1;
    while(n > 0){
         num *= n;
        n--;
    }
    return num;
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}

