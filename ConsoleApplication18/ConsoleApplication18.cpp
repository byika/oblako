﻿// ConsoleApplication18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //4.Пользователь вводит с клавиатуры массу в тоннах (дробное число).
    //Вывести по отдельности количество тонн, килограмм, грамм (например, ввести 126.456789т - получить и вывести 126т 456кг 789г)
    double massa;

    std::cout << "massa v tonnax: ";
    std::cin >> massa;
    massa = trunc(massa * 1000000);
    std::cout << "gr: "<< int(massa) % 1000 
        << ", kg: " << int(massa) / 1000 % 1000 << ", tn: " << int(massa) / 1000000 % 1000 << "\n";

    //5.Пользователь вводит с клавиатуры время в секундах.
    //Перевести это значение в дни, часы, минуты и секунды. Например, 43512 секунд – это 12 часов, 5 минут и 12 секунд.

    long sec;

    std::cout << "sec: ";
    std::cin >> sec;

    int h = sec / 3600;

    std::cout << "dni: " << h / 24
        << ", chaCb|: " << h << ", minutb|: " << sec / 60 << ", secyndb|: " << sec << "\n";

    //7.Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора (часы, минуты и секунды).
    //Посчитать стоимость разговора, если стоимость минуты составляет 15 копеек, с учётом посекундной тарификации.
    int c[2]{
       
    };
    int m[2]{

    };
    int s[2]{

    };
    int o;

    std::cout << "nachalo (chas, sec, min): ";
    std::cin >> c[1];
    std::cin >> m[1];
    std::cin >> s[1];
    std::cout << "konec (chas, sec, min): ";
    std::cin >> c[0];
    std::cin >> m[0];
    std::cin >> s[0];

    o = (c[0] * 3600 + m[0] * 60 + s[0]) - (c[1] * 3600 + m[1] * 60 + s[1]);

    std::cout << "Bb| GoBoPU/\\U: " << c[0] - c[1] << "chasov, " << m[0] - m[1]
        << "minut, " << s[0] - s[1] << "cekynd, i doljni zaplatitb: " << o * 0.50;

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
