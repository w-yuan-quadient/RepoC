#include <iostream>
#include "VectorAdd.h"
#include "VectorMul.h"

static void print_vector(const char* name, const double* v, int size)
{
    // this is a empty comment line
    std::cout << "New Interface:\n";
    std::cout << name << ": ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << v[i] << (i + 1 == size ? "" : ", ");
    }
    std::cout << std::endl;
}

int main()
{
    const int size = 3;
    double a[size] = {1.0, 2.0, 3.0};
    double b[size] = {10.0, 20.0, 30.0};
    double add_result[size] = {};
    double mul_result[size] = {};

    vector_add(a, b, add_result, size);
    vector_mul(a, b, mul_result, size);

    print_vector("A", a, size);
    print_vector("B", b, size);
    print_vector("A + B", add_result, size);
    print_vector("A * B", mul_result, size);

    return 0;
}
