#include "myinclude.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>

#define _DEBUG_	1
#define TRACE	(_DEBUG_ == 0) ? (void) 0 : printf
#define EOL	"\r\n"


int main(int argc, char *argv[]) 
{
	FILE *id_file;

	#ifdef __LINUX__
	printf("%s è un programma scritto in Linux" EOL, argv[0]);
	#endif
	
	TRACE("Questo è l'inizio del programma"EOL);

	id_file=fopen("pippo.txt", "r");
	if(id_file==NULL){
		printf("Errore %d nell'apertura del file", errno);
		if(errno==ENOENT){
			printf("File inesistente"EOL);
		}
	}

	if(id_file!=NULL){
		fclose(id_file);
	}

	return 0;
}
