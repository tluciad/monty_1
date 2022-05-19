#include "monty.h"
/**
 * @brief
 *
 */
int main(int argc, char **argv)
{
	char *buf;
	if (argc != 2)
	{
		fprintf(stderr, "usage: monty file \n");
		exit(EXIT_FAILURE);
	}

   buf = read_textfile(argv[1], 100);

   free(buf);

	exit(EXIT_SUCCESS);
}