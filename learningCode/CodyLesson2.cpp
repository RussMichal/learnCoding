#include <iostream>

int CodyLesson2()
{
    float num1=0;
    char oper=' ';
    float num2=0;

    while (oper != 'e')
    {
        std::cout << "choose a number:\n";
        std::cin >> num1;

        std::cout << "choose an operation (-,+,*,/,e):\n";
        std::cin >> oper;

        std::cout << "choose a number:\n";
        std::cin >> num2;

        //num1 = 15 num2 = 12: f 
        //num1 = 5 num2  = 8 : f

        //this is what im trying to do
        if (num1 < 10 == num2 < 10)
        {
            float res = 1;

            std::cout << "invalid number input\n";
            return 0;
        }
        float res;

        switch (oper)
        {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        }
        std::cout << num1 << " " << oper << " " << num2 << " = " << res << "\n";
    }
    return 0;

}