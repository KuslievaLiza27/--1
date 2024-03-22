// Функция для поразрядного деления двух двоичных чисел
string bitwise_division(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong();
    int n2 = bitset<8>(num2).to_ulong();
    return bitset<8>(n1 / n2).to_string();
}

int main() {
    // Задаем двоичные числа в виде строковых литералов
    string num1 = "10101";
    string num2 = "11011";

    // Выводим результаты поразрядных операций над числами
    cout << "Bitwise Addition: " << bitwise_addition(num1, num2) << endl;
    cout << "Bitwise Subtraction: " << bitwise_subtraction(num1, num2) << endl;
    cout << "Bitwise Multiplication: " << bitwise_multiplication(num1, num2) << endl;
    cout << "Bitwise Division: " << bitwise_division(num1, num2) << endl;

    return 0;
}
