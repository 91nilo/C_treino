#include <stdio.h>

int main(void)
{
    int n[7] = {32, 27, 64, 18, 95};
	
	printf("%s%13s\n", "Element", "Value");
	
	for(size_t i = 0; i < 7; ++i)
	{
	    printf("%7u%13d\n", i, n[i]);
	
	}


}