#include <iostream>

int static Range = 95;
int Numbers[10]; 
void UserEnter() {
    for (int i = 0; i < 10; i++) {
        std::cin >> Numbers[i];
    }
}
int UpToRange(int &FirstNum, int &SecondNum) {
    for (int i = 0; i < 9; i++) {
        if (Numbers[i] + Numbers[i+1] > Numbers[FirstNum] + Numbers[SecondNum] &&
        Numbers[i] + Numbers[i+1] <= Range) {
            FirstNum = i;
            SecondNum = i+1;
        }
    }
    return FirstNum, SecondNum;
}
int main() {
    int FirstNum = 0, SecondNum = 0;
    UserEnter();
    UpToRange(FirstNum, SecondNum);
    std::cout << "First Number:" << FirstNum << "\nSecond Number:" << SecondNum << "\n";
    return 0;
}