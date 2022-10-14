#include <stdio.h>
#include <string.h>
#include "csv.h" 

int
main(void)
{
	save mysave;
	int a, b;

	a = sizeof(mysave);
	
    	char name[] = "Wow";
	
	strcpy(mysave.name, name);

	printf("mysave 0x%02x\n", &mysave);
	printf("mysave name\t0x%02x %s\n", &mysave.name, mysave.name);
	printf("mysave data1\t0x%02x %s\n", &mysave.data1, mysave.data1);

	printf("offset 0x%02x\n", mysave.data1 - mysave.name);
}
