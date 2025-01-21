
#include "../minishell.h"

void	ft_ctrlc(int sign)
{
	if (!sign)
		printf("sign\n");
	printf("\n");
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
}

void	ft_ctrlslash(int sign)
{
	if (!sign)
		printf("sign\n");
	rl_on_new_line();
	rl_redisplay();
}
