#include <iostream>
#include <fstream>

int Matrix[5][5];

void FileToArray() {
    std::ifstream file;
    file.open("file.txt");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            file >> Matrix[i][j];
        }
    }
    file.close();
} 
int Function() {
   int Result = 0;
    for (int i = 0; i < 4; i++) {
        Result += Matrix[i][i+1];
    }
    Result /= 4.0;
    return Result;
}
int main() {
    int Res;
    FileToArray();
    Res = Function();
    std::cout << "result: " << Res << "\n"; 
    return 0;
}
