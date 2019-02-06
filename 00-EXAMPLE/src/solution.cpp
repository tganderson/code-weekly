#include <iostream>
#include <string>

std::string print(const std::string& name) { return "Hi, " + name; }

int main(int argc, char* argv[])
{
    std::string name = argv[1]; // read in name
    std::cout << print(name); // print "Hi, <name>"
}

// now compile with g++ src/solution.cpp -o solution from the `00-EXAMPLE` directory
