#ifndef TEST_HEADER_H
# define TEST_HEADER_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	next_bracket(char *str, int start);
int	ft_atoi(char *str, int start);
void decontruct(char *str);
t_list	*ft_create_elem(void *data);
void deconstruct(char *str);

#endif
