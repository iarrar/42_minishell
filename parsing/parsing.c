
#include "../minishell.h"

char	**parsing(char *cmd, char **env, int err)
{
	char	**cmds;

	cmds = split(cmd, ' ', 0, 0);
	cmds = ft_parkour(cmds, env, err);
	cmds = handle_quote(cmds);
	return (cmds);
}
