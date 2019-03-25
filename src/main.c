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
        char file_name[20];
	#ifdef __LINUX__
	printf("%s è un programma scritto in Linux" EOL, argv[0]);
	#endif
	
	TRACE("Questo è l'inizio del programma"EOL);

	sprintf(&file_name[0],"pippo.txt");
	id_file=fopen(&file_name[0], "r+");
	if(id_file==NULL){
		printf("Errore %d nell'apertura del file %s" EOL, errno,&file_name[0]);
		if(errno==ENOENT){
			printf("File inesistente"EOL);
		}
	}
	if(id_file!=NULL){
		fprintf(id_file, "Ciao questo è il contenuto del file" EOL);
	}


	if(id_file!=NULL){
		fclose(id_file);
	}

	return 0;
}
