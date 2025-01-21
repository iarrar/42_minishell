
#include "../minishell.h"

int	m_exit(char **cmds, char **envp)
{
	(void)cmds;
	(void)envp;
	ft_freetabs(cmds);
	ft_freetabs(envp);
	rl_clear_history();
	exit(0);
	return (1);
}
