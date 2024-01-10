#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    // cout is close output stream
    // /n is still faster than endl, but endl is safer
    // endl is a manipulator, which is a special type of function that manipulates the stream it's used with.
    std::cout << "I am Kintsugi CS Sorceror";
    return 0;
}
/*

- `#include <iostream>`: This line includes the Input/Output stream library, which allows you to perform input and output operations.

- `int main()`: This is the main function where the program starts its execution.

- `std::cout`: This is used to print output to the console.

- `<<`: The insertion operator, used to insert data into the output stream.

- `std::endl`: This represents the end of a line and is used to move the cursor to the next line.


*/