#include "mul.hh"

__declspec(dllexport) void mul(int a, int b)
{
    std::cout << a * b << std::endl;
}