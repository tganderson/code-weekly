#include <cstdint>
#include <iostream>
#include <string>

// compute n^k
uint32_t exp(uint32_t n, uint32_t k) { /* helper function, logic here */ }

uint32_t n_exp_n(uint32_t n) { return exp(n, n); }

int main(int argc, char* argv[])
{
    uint32_t n = std::stoul(argv[1]); // read in n, cast to uint32_t
    std::cout << n_exp_n(n); // print n^n
}

// now compile with g++ src/solution.cpp -o solution in the 01 directory
