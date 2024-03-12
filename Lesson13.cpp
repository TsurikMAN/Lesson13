#include <iostream>
#include "Helpers.h"



int main()
{
    std::cout << "If u want to count (A+B)*(A+B)\n";
    int a, b;
    std::cout << "Insert A:\nA=";
    std::cin >> a;
    std::cout << "Insert B:\nB=";
    std::cin >> b;

    
    int result = summ(a=a,b=b);
    std::cout << "Result is " << result << std::endl;
}

