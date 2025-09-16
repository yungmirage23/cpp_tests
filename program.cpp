#include <iostream>
#include <string>
void printHello()
{
    std::cout << "Hello, World!" << std::endl;
}
int main(int argc, char* argv[])
{

    printHello();
    if (argc > 3)
    {
            int a = std::stoi(argv[1]);
            int b = std::stoi(argv[2]);
            int c = std::stoi(argv[3]);
            int result = a + b + c;
            std::cout << "Сума: " << result << std::endl;
    }
    else
    {
        std::cout << "Аргументи не передані." << std::endl;
    }

    return 0;
}
