#include "includes/ft_printf.h"

void ft()
{
    system("leaks a.out");
}

int main(int c, char *v[])
{
    //atexit(ft);
    int i = -1337;
    ft_print_hex(i);
    puts("");
    ft_print_HEXA(i);
    puts("");
    ft_print_nbr(i);
    puts("");
    ft_putUnbr(i);
    puts("");
	ft_print_addres(&i);
    puts("\n====");
    printf("%x\n", i);
    printf("%X\n", i);
    printf("%d\n", i);
    printf("%u\n", i);
    printf("%p\n", &i);
    return (0);
}
