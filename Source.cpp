#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>

using namespace std;

class String {
private:
	static int count;
	char* str;
	int size;

public:
    String() = default;
    String(int size) : size(size) {
        str = new char[size];
        count++;
    }
    String(const char* s) {
        size = strlen(s) + 1;
        str = new char[size];
        strcpy_s(str, 10,s);
        count++;
    }
    ~String() {
        delete[] str;
        count--;
    }

    void inputString() {
        cout << "Введите строку: ";
        cin >> str;
    }

    void outputString() {
        cout << "Строка: " << str << '\n';
    }
    
};



int main() {
    String str1;
    String str2(100);
    String str3("Hello");
    str1.inputString();
    str1.outputString();
    str2.outputString();
    str3.outputString();

    return 0;
}