
#include "../minishell.h"

int	ft_check_empty(char *str, char c)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			a++;
		i++;
	}
	if (a == i)
		return (1);
	else
		return (0);
}

void	handle_history(char *cmd)
{
	if (cmd == NULL || ft_check_empty(cmd, ' ') == 1)
		return ;
	add_history(cmd);
	rl_on_new_line();
}
