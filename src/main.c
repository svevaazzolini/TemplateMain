#include "myinclude.h"
#include <stdio.h>
#include <string.h>

#define _DEBUG_	0
#define TRACE	(_DEBUG_ == 0) ? (void) 0 : printf
#define EOL	"\r\n"


int main(int argc, char *argv[]) 
{
	#ifdef __LINUX__
	printf("%s è un programma scritto in Linux" EOL, argv[0]);
	#endif
	
	TRACE("Questo è l'inizio del programma"EOL);

	return 0;
}
