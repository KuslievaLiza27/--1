﻿// ПБВТ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <bitset>

using namespace std;

// Функция для поразрядного сложения двух двоичных чисел
string bitwise_addition(string num1, string num2) {
    // Преобразуем двоичные числа в целочисленные значения типа int
    int n1 = bitset<8>(num1).to_ulong();
    int n2 = bitset<8>(num2).to_ulong();

    // Выполняем сложение двух чисел и возвращаем результат в виде строки в двоичном формате
    return bitset<8>(n1 + n2).to_string();
}

// Функция для поразрядного вычитания двух двоичных чисел
string bitwise_subtraction(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong();
    int n2 = bitset<8>(num2).to_ulong();
    return bitset<8>(n1 - n2).to_string();
}

// Функция для поразрядного умножения двух двоичных чисел
string bitwise_multiplication(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong();
    int n2 = bitset<8>(num2).to_ulong();
    return bitset<8>(n1 * n2).to_string();
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
