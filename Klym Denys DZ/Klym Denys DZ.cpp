#include <iostream>
#include<Windows.h>

using namespace std;

int lastTwoDigits(int n) 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = (result * 6) % 100;
    }
    return result;
}


int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    for (int i = 2; i <= 16; i++) {
     cout << "6^" << i << " % 100 = " << lastTwoDigits(i) << endl;
    }
    return 0;
}

