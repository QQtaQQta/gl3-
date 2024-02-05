#include <stdio.h>

int main()
{
	char word[100];
	int i = 0;
	while (scanf("%s", word) ==1)
	{
		i++;
		if(i%2)
			fprintf(stdout, "%s\n", word);
		else
			fprintf(stderr, "%s\n", word);
	}
	return 0;
}
