#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 10;
    int array[SIZE];


    srand(time(0));


    for (int i = 0; i < SIZE; ++i) {
        array[i] = rand() % 100;
    }


    cout << "Сгенерированный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;


    int min = array[0], max = array[0];
    for (int i = 1; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }


    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    cout << "\n\t--------------------------------------------------------------\n\t";
    const int SIZE1 = 10;
    int array1[SIZE1];
    int limit;
    int sum = 0;


    srand(time(0));


    for (int i = 0; i < SIZE1; ++i) {
        array1[i] = rand() % 100;
    }


    cout << "Сгенерированный массив: ";
    for (int i = 0; i < SIZE1; ++i) {
        cout << array1[i] << " ";
    }
    cout << endl;


    cout << "Введите число (лимит): ";
    cin >> limit;


    for (int i = 0; i < SIZE1; ++i) {
        if (array1[i] < limit) {
            sum += array1[i];
        }
    }


    cout << "Сумма элементов, меньших " << limit << ": " << sum << endl;

    cout << "\n\t--------------------------------------------------------------\n\t";
    return 0;
}