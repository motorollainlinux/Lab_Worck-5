#include <iostream>

void UserEnter(int (&Numbers)[10], int N) {
    for (int i = 0; i < N; i++) {
        std::cin >> Numbers[i];
    }
}

int Function(int N, int* Numbers) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (Numbers[i] == Numbers[j] && i != j) {
                return i, Numbers[i];
            } 
        }
        if (Numbers[i] > N || Numbers[i] < 1) {
            return i, Numbers[i];
        }
    }
    return -1;
}

int main() {
    static int N = 10;
    int Numbers[N];
    UserEnter( int &Numbers, N);
    Function(N, Numbers);
    return 0;
}
