#include <iostream>

int static Range = 95;
int Numbers[10]; 
void UserEnter() {
    for (int i = 0; i < 10; i++) {
        std::cin >> Numbers[i];
    }
}
int UpToRange() {
    int firstnumber[2], secondnumber[2];
    firstnumber[0] = 0;
    firstnumber[1] = Range - 1;
    secondnumber[0] = 0;
    secondnumber[1] = Range - 1;
    for ( int i = 0; i < 10; i++) {
        if (firstnumber[1] - Range < Numbers[i] - Range &&
        firstnumber[1] + Range > Numbers[i] + Range) {
            firstnumber[0] = i;
            firstnumber[1] = Numbers[i];
        } else if (secondnumber[1] - Range < Numbers[i] - Range &&
        secondnumber [1] + Range > Numbers[i] + Range) {
            secondnumber[0] = i;
            secondnumber[1] = Numbers[i];
        }
    }
    return firstnumber[0], secondnumber[0];
}
int main() {
    int first, second;
    UserEnter();
    first, second = UpToRange();
    
    std::cout << "first number: " << first << "\nsecond number: " << second <<"\n";
    return 0;
}
