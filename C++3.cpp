#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double sum = 0;
    double nums[3][5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Введите " << j+1 << " элемент " << i+1 << " строки: ";
            cin >> nums[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum = sum + nums[i][j];
        }
        sum = sum / 5;
        cout << "Среднее арифметическое чисел " << i + 1 << " строки равно " << sum << endl;
        sum = 0;
    }
}
