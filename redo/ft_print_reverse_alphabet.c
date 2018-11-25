void ft_putchar(char c);

void    ft_print_reverse_alphabet(void)
{
        int a;

        a = 122;
        while (a > 96)
        {
                ft_putchar((char)(a--));
        }
}
