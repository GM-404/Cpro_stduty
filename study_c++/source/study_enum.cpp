#include <iostream>
#include "LOG.hh"

enum example
{
    A = 1,
    B = 2,
    C = 3
};

int main()
{
    LOG(A); // 1
    LOG(B); // 2
    LOG(C); // 3
    return 0;
}