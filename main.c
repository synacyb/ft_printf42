#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int main() {
    // int number = 42;

    // // Get the address of the variable
    // int *address = &number;

    // // Print the address in hexadecimal format using %p
    // printf("Address of number: %d\n", address);
    // printf("Address of number: %p\n", address);
    // return 0;


    int i= ft_printf("%%%c\n", '5');
    int ii = printf("%%%c\n", '5');
    ft_printf("{%d , %d}\n", i, ii);
}