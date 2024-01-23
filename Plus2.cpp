

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    int choice;
    cout << "Выберете операцию или завершите программу\n1. Сложение\n2. Вычетание\n3. Умножение\n4. Деление\n5. Возведение в степень\n6. Найти квадратный корень числа\n7. Найти 1 процент от числа\n8. Найти факториал числа\n9. Завершить программу\n";
    cin >> choice;
    
    while (choice != 9) 
    {

        double num1;
        double num2;
        if (choice >= 1 && choice <= 4) 
        {
            cout << "\nВведите число 1:\n";
            cin >> num1;
            cout << "Введите число 2:\n";
            cin >> num2;
            if (choice == 1)
            {
                cout << num1 + num2;
            }
            if (choice == 2)
            {
                cout << num1 - num2;
            }
            if (choice == 3)
            {
                cout << num1 * num2;
            }
            if (choice == 4)
            {
                if (num2 == 0)
                {
                    cout << "На 0 делить нельзя\n";
                }
                else
                {
                    cout << num1 / num2;
                }

            }
        }
        if (choice == 5)
        {

            cout << "\nВведите число:\n";
            cin >> num1;
            cout << "Введите степень:\n";
            cin >> num2;
            cout << pow(num1, num2);

        }
        if (choice == 6)
        {
            cout << "\nВведите число:\n";
            cin >> num1;
            if (num1 >= 0)
            {
                double num3 = sqrt(num1);
                cout << num3;
            }
            else
            {
                cout << "Отрицательное число\n";
            }
        }
        if (choice == 7)
        {
            cout << "\nВведите число:\n";
            cin >> num1;
            cout << num1 / 100;

        }
        if (choice == 8)
        {
            num2 = 1;
            cout << "\nВведите число:\n";
            cin >> num1;
            if (num1 == 0)
            {
                cout << "1";
            }
            if (num1 < 0)
            {
                cout << "Введите натуральное число\n";
            }
            else
            {

                for (int i = 1; i <= num1; i++)
                {
                    num2 = i * num2;
                }
                cout << num2;
            }

        }
        cout << "\n\nВведите операцию ещё раз:\n";
        cin >> choice;
    }


    return 0;
}