
#include "../minishell.h"

// i++;         //i++ pour tester avec le main
int	m_echo_n(char **cmd)
{
	int	i;

	i = 2;
	while (cmd[i])
	{
		printf("%s", cmd[i]);
		if (cmd[i + 1] != NULL)
			printf(" ");
		i++;
	}
	return (1);
}

// Main pour tester la fonction m_echo_n, !CONTIENT DES FONCTIONS INTERDITES!

// int	main(int argc, char **argv)
// {
// 	if (strcmp(argv[1], "echo") != 0 || strcmp(argv[2], "-n") != 0)
// 	{
// 		printf("Cacahuete\n");
// 		return (0);
// 	}
// 	m_echo_n(argv);
// 	return (0);
// }