#ifndef HEADER_H
# define HEADER_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);
void find_bracket(char *str);
void deconstruct(char *str);
void find_operator(char **argv);
int	ft_sudo_atoi(char *str, int start);
int ft_numlen(int nbr);
int ft_strlen(char *str);
int add(int a, int b);
int subtract(int a, int b);
int mod(int a, int b);
int multiply(int a, int b);
int divid(int a, int b);
int *put_num_to_array(int nbr, int arr[], int index);

#endif
