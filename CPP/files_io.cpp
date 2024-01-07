#include  <iostream>
#include  <fstream>
int main()
{
    /* code */
    // Write to file
    // another way to open file : std::ofstream file("test.txt");
    std::ofstream file;
    file.open("rough/test.txt");
    file << "Hello World!";
    file.close();

    // Read from file
    std::ifstream file2;
    file2.open("rough/test.txt");
    std::string line;
    file2 >> line;
    std::cout << "File Content :"<<line << std::endl;
    file2.close();
    return 0;
}
