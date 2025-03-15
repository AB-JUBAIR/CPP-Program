#include <iostream>

int main() {
    int a, b, sum;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    sum = a + b;

    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;

    return 0;
}
