#include <iostream>

void UserEnter(int Numbers[], int N) {
    for (int i = 0; i < N; i++) {
        std::cin >> Numbers[i];
    }
}

int Function(int N, int* Numbers) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (Numbers[i] == Numbers[j] && i != j) {
                return i;
            } 
        }
        if (Numbers[i] > N || Numbers[i] < 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    static int N = 10;
    int Numbers[N];
    int Result;
    UserEnter( Numbers, N);
    Result = Function(N, Numbers);
    if (Result == -1) {
        std::cout << "Function result: " << Result << "\n";
    } else {
        std::cout << "Function result: " << Result << " " << Numbers[Result] << "\n";
    }
    return 0;
}
