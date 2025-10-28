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

    unsigned long long answer = 0ULL;
    int index = 0;
    char* str = argv[1];
    char ch = 0;

    while (index < 65 && (ch = str[index]) != '\0') {
        if (ch != '1' && ch != '0') {
            std::cout << "<unknown symbol>" << std::endl;
            return 1;
        }

        answer = answer * 2 + (ch - '0');
        ++index;
    }

    if (str[index] == '\0') {
        std::cout << answer << std::endl;
    } else {
        std::cout << "<exceeded input limit>" << std::endl;
        return 2;
    }

    return 0;
}
