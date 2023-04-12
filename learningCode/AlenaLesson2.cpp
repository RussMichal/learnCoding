# include <iostream>

float firstNum()
{
    float num1;
    std::cout << "Enter 1st number: ";
    std::cin >> num1;
    return num1;
}

char oper()
{
    char op;
    std::cout << "Enter operator: +, -, , /: ";
    std::cin >> op;
    return op;
}

float secondNum()
{
    float num2;
    std::cout << "Enter 2nd number: ";
    std::cin >> num2;
    return num2;
}

void calculate(const float num1, const float num2, const char op)
{
    if ((num1 < 10) && (num2 > 10)) {
        switch (op) {

        case '+'://1
            std::cout << "plus" << std::endl;
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-'://2
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*'://3
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/'://4
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '%'://5
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        }
    }
}

int AlenaLesson2() 
{

    char op;
    float num1, num2;

    num1 = firstNum();
    num2 = secondNum();
    op = oper();

    calculate(num1, num2, op);

    calculate(num1, num1, op);

    calculate(num2, num2, op);

    return 0;
}