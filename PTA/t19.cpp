#include<iostream>

using namespace std;

int getFact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    int S = 0;

    while (N != 0)
    {
        S += getFact(N);
        N--;
    }

    cout << S;
}