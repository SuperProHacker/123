# Сумма и произведение цифр числа
Пользователь вводит число (целое положительное)
вычислить сумму и произведение цифр числа в десятичном представлении 
## пример 

Ввод 99

Вывод 18 81
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::cout << "Use:\n\tbin2dec binary_number" << std::endl;
        return 0;
    }

    unsigned long long answer = 0ull;
    int index = 0;
    while (index < 65 && argv[1][index] != '\0') {
        answer = answer * 2 + ??? 
    }

    return 0;
}
