
#include "../minishell.h"

int	m_cd(char **cmds)
{
	chdir(cmds[1]);
	return (1);
}
