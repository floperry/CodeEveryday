#include <iostream>

using namespace std;

void ReplaceSpace(char string[], int length) {
    if (string == NULL || length <= 0) {
        return;
    }

    int originalLength = 0;
    int numberOfSpace = 0;
    int i = 0;
    while (string[i] != '\0') {
        ++ originalLength;
        if (string[i] == ' ') {
            ++ numberOfSpace;
        }
        ++ i;
    }

    int finalLength = originalLength + numberOfSpace * 2;
    int indexOfOriginal = originalLength;
    int indexOfFinal = finalLength;
    while (indexOfOriginal >= 0 && indexOfFinal > indexOfOriginal) {
        if (string[indexOfOriginal] == ' ') {
            string[indexOfFinal--] = '0';
            string[indexOfFinal--] = '2';
            string[indexOfFinal--] = '%';
        }
        else {
            string[indexOfFinal--] = string[indexOfOriginal];
        }
        -- indexOfOriginal;
    }
    cout << string << endl;
}

void Test1() {
    const int length = 100;
    char string[length] = "We are happy.";
    ReplaceSpace(string, length);
}

void Test2() {
    const int length = 100;
    char string[length] = "Wearehappy.";
    ReplaceSpace(string, length);
}

void Test3() {
    const int length = 100;
    char string[length] = " We are happy.";
    ReplaceSpace(string, length);
}

void Test4() {
    const int length = 100;
    char string[length] = "We are happy. ";
    ReplaceSpace(string, length);
}

void Test5() {
    const int length = 100;
    char string[length] = "";
    ReplaceSpace(string, length);
}

void Test6() {
    const int length = 100;
    char string[length] = " ";
    ReplaceSpace(string, length);
}

int main() {
    cout << "Test1: " << endl;
    Test1();
    cout << "Test2: " << endl;
    Test2();
    cout << "Test3: " << endl;
    Test3();
    cout << "Test4: " << endl;
    Test4();
    cout << "Test5: " << endl;
    Test5();
    cout << "Test6: " << endl;
    Test6();
    return 0;
}
