#include <iostream>
using namespace std;

void extremym(int size)
{
    setlocale(LC_ALL, "ru");
    int e = 0;
    int u = 0;
    int z = 0;
    int* mas = new int[size];
    int* mass = new int[size];

    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 100;
    }
    for (int i = 1; i < size - 1; i++)
    {
        if (mas[i] > mas[i - 1] && mas[i] > mas[i + 1])
        {
            mass[i] = { i };
            cout << "Экстремум максимума\t\t\t\t" << i << endl;
            e = e + 1;
        }

        if (mas[i] < mas[i - 1] && mas[i] < mas[i + 1])
        {
            mass[i] = { i };
            cout << "Экстремум минимума\t\t\t\t" << i << endl;
            u = u + 1;
        }
    }

    z = z + u + e;
    if (z > 0)
    {
        cout << "Общее количество экстремумов=\t\t\t" << z << endl;
    }

    delete[] mas;
    delete[] mass;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Выведите размер исходного массива=\t\t";
    cin >> size;
    try
    {
        extremym(size);
    }
    catch (int z)
    {
        cout << "Сохранить экстремумы в новом массиве mass невозможно \t" << endl;
    }
    system("pause");
    return 0;
}