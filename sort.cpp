/* Жембровської Олени ФБ-93
17. сортування – вибором;*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void choicesSort(int*, int); // прототип функции сортировки выбором

int main(int argc, char* argv[])
{
    srand(time(NULL));
    cout << "Enter array size: ";
    int size_array; // длинна массива
    cin >> size_array;

    int* sorted_array = new int[size_array]; // одномерный динамический массив
    for (int counter = 0; counter < size_array; counter++)
    {
        sorted_array[counter] = rand() % 100; // заполняем массив случайными числами
        cout << setw(2) << sorted_array[counter] << "  "; // вывод массива на экран
    }
    cout << endl;

    choicesSort(sorted_array, size_array); // вызов функции сортировки выбором

    for (int counter = 0; counter < size_array; counter++)
    {
        cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
    }
    cout << endl;
    delete[] sorted_array; // высвобождаем память
    system("pause");
    return 0;
}

void choicesSort(int* arrayPtr, int length_array) // сортировка выбором
{
    for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
    {
        int temp = arrayPtr[0]; // временная переменная для хранения значения перестановки
        for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
        {
            if (arrayPtr[repeat_counter] > arrayPtr[element_counter])
            {
                temp = arrayPtr[repeat_counter];
                arrayPtr[repeat_counter] = arrayPtr[element_counter];
                arrayPtr[element_counter] = temp;
            }
        }
    }
}