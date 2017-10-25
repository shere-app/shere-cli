//
// author: Marek
// created: 25.10.2017.
//

#include <filesystem>
#include <iostream>

int main(int argc, char * argv[])
{
    std::cout << "Hi bro:" << std::experimental::filesystem::current_path() << std::endl;
}