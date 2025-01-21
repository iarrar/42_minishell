
#include "minishell.h"

void	print_tab(char **tableau)
{
	int	i;

	i = 0;
	while (tableau[i] != NULL)
	{
		printf("%s\n", tableau[i]);
		i++;
	}
}

void	ft_freetabs(char **tab)
{
	int	i;

	i = 0;
	if (tab != NULL)
	{
		while (tab[i])
		{
			free(tab[i]);
			tab[i] = NULL;
			i++;
		}
		free(tab);
		tab = NULL;
	}
}

void	ft_freetabs_plus(char **tab)
{
	int	i;

	i = 0;
	if (tab != NULL)
	{
		while (tab[i])
		{
			free(tab[i]);
			tab[i] = NULL;
			i++;
		}
	}
}

int	ft_tab_len(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}

void	ft_free_command(t_command **cmd)
{
	int	i;

	i = 0;
	if ((*cmd)[0].cmd != NULL)
	{
		while ((*cmd)[i].cmd != NULL)
		{	
			ft_freetabs_plus((*cmd)[i].cmd);
			ft_freetabs_plus((*cmd)[i].env.env_cpy);
			free((*cmd)[i].env.env_cpy);
			if ((*cmd)->env.key)
				free((*cmd)->env.key);
			if ((*cmd)->env.value)
				free((*cmd)->env.value);
			i++;
		}
		ft_freetabs_plus((*cmd)[i].env.env_cpy);
		if (i > 1)
			free((*cmd)->cmd);
		free(*cmd);
		(*cmd) = NULL;
	}
}
