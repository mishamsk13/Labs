﻿// Lab2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()

{
    setlocale(LC_ALL, "Russian");

    int x;

    std::cout << "Введите певрое число ";

    std::cin >> x;

    int y;

    std::cout << "Введите второе число ";

    std::cin >> y;

    int sr;

    sr = (x + y) / 2;

    std::cout << "среднее арифм " << sr << std::endl;


    std::cout << "Введите знак: ";
    char p;
    std::cin >> p;

    int res;
    /*
    if (p == '+') {
        res = x + y;
    }
    else if (p == '-') {
        res = x - y;
    }
    else if (p == '/') {
        res = x / y;
    }
    else if (p == '*') {
        res = x * y;
    }
    else {
        std::cout << "ошибка\n";
        return 0;
    }
    */

    switch (p)
    {
    case '+':
        res = x + y;
        break;
    case '-':
        res = x - y;
        break;
    case '/':
        res = x / y;
        break;
    case '*':
        res = x * y;
        break;
    default:
        std::cout << "ошибка\n";
        break;
    }

    std::cout << res << std::endl;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
