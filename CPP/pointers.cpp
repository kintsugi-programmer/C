#include <iostream>
int main()
{
    /* code */
    // Pointer declaration and initialization
    int no = 42;
    int *pointer = &no;
    std::cout << "Value of no: " << no << std::endl;
    // Accessing pointer value
    std::cout << "Address of no: " << &no << std::endl;
    return 0;
}
