#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int index = 0;
	int test;
	scanf("%d", &test);

	for (int t = 1; t <= test; t++)
	{
        char result[100];
		scanf("%s", str);

		for (int i = 0; str[i]; i++)
		{
			if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
			{
				result[index++] = str[i];
			}
		}
		result[index] = '\0';
		printf("#%d %s\n", t, result);
        index = 0;
	}
	return 0;
}
