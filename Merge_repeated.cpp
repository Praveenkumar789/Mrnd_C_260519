#include "Mainheader.h"

char* Mergestring(char *str)
{
	int size = 3;
	char *op = (char*)malloc(sizeof(char) * size);
	int ind = 0, cnt = 1;
	int i = 1;
	char current = str[0];
	while (str[i] != '\0')
	{
		if (str[i] == current)
		{
			cnt += 1;
		}
		else{
			size += 2;
			op = (char*)realloc(op, size);
			op[ind++] = current;
			if (cnt > 1)
			{
				op[ind++] = (char)(cnt + 48);
			}
			current = str[i];
			cnt = 1;
		}
		i++;
	}
	op[ind++] = current;
	if (cnt > 1)
	{
		op[ind++] = (char)(cnt + 48);
	}
	op[ind] = '\0';
	//printf("in func :%s", op);
	return op;
}