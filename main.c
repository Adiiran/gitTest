
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char mensaje[1024];
	
	memset(mensaje, 0, 1024];
	sprintf(mensaje, "This is a testing programm");
	
	fprintf(stdout, mensaje);

	return 0;
}
