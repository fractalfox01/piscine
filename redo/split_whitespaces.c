#include <stdlib.h>
#include <unistd.h>

char *get_word(char *str, int i)
{
    int a = 0;
    int start = i;
    char *word;

    while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ' && str[i] != '\r' && str[i] != '\n')
    {
        i++;
    }
    word = malloc(sizeof(char *) * (i + 1));
    while (start < i)
    {
        word[a++] = str[start];
        start++;
    }
    word[start] = '\0';
    return (word);
}

int no_spaces(char *str)
{
    int i;
    int a = 0;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t')
        {
            i++;
            continue ;
        }
        else
        {
            a++;
            i++;
        }
    }
    return (a);
}

char **split_whitespaces(char *str)
{
    int i = 0;
    int a = 0;
    char **ret;

    int no_space = no_spaces(str);
    ret = malloc(sizeof(char *) * (no_space + 1));
    while (str[i] != '\0')
    {
        if (str[i] == '\t' || str[i] == ' ' || str[i] == '\r' || str[i] == '\n')
        {
            i++;
            continue ;
        }
        ret[a] = get_word(str, i);
        i += no_spaces(ret[a]);
        a++;
    }
    ret[a] = NULL;
    return (ret);
}

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    while (*str != '\0')
        my_putchar(*str++);
}

int main(int argc, char **argv)
{
    int i = 0;
    char **ret;
    if (argc > 1)
    {
        ret = split_whitespaces(argv[1]);
        while (ret[i] != NULL)
        {
            my_putstr(ret[i]);
            my_putchar('\n');
            i++;
        }
    }
    return (0);
}
