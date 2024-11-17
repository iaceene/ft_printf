#include "includes/ft_printf.h"

void ft()
{
    system("leaks a.out");
}

int main(int c, char *v[])
{
    // atexit(ft);
    // int count = 0;
    // int counnt = 0;
    // char *s = "yassine";
    // int i = 1337;
    // count += ft_print_hex(i);
    // puts("");
    // count += ft_putchar(s[1]);
    // puts("");
    // count += ft_print_HEXA(i);
    // puts("");
    // count += ft_print_nbr(i);
    // puts("");
    // count += ft_putUnbr(i);
    // puts("");
    // count += ft_putstr(s);
    // puts("");
    // count  += ft_print_addres(s);
    // puts("\n====");
    // counnt += printf("%x\n", i) - 1;
    // counnt += printf("%c\n", s[1]) - 1;
    // counnt += printf("%X\n", i) - 1;
    // counnt += printf("%d\n", i) - 1;
    // counnt += printf("%u\n", i) - 1;
    // counnt += printf("%s\n", s) - 1;
    // counnt += printf("%p\n", s);
    // puts("====");
    // printf("min %d\n", count);
    // printf("sys %d\n", counnt);
    // return (0);
    int i = 0;
    int j = 0;
    char *s = "s";
    i = ft_print_addres(0);
    puts("");
    // i = ft_printf("%p\n", "");
    j = printf("%p", 0);
    printf("\n%d\n", i);
    printf("%d\n", j);
}
