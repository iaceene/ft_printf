#include "includes/ft_printf.h"

void ft()
{
    system("leaks a.out");
}

int main(int c, char *v[])
{
    // atexit(ft);
    int count = 0;
    int counnt = 0;
    int i = 1337;
    count += ft_print_hex(i);
    puts("");
    count += ft_print_HEXA(i);
    puts("");
    count += ft_print_nbr(i);
    puts("");
    count += ft_putUnbr(i);
    puts("");
    count  += ft_print_addres(&i);
    puts("\n====");
    counnt += printf("%x\n", i) - 1;
    counnt += printf("%X\n", i) - 1;
    counnt += printf("%d\n", i) - 1;
    counnt += printf("%u\n", i) - 1;
    counnt += printf("%p\n", &i);
    puts("====");
    printf("min %d\n", count);
    printf("sys %d\n", counnt);
    return (0);
}
