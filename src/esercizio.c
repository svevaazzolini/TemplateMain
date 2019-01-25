
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "my_include.h"


#define _DEBUG_         1

#define TRACE           (_DEBUG_ == 0) ? (void) 0 : printf
#define EOL     "\r\n"

int main (int argc ,char *argv[])
{
   int  retv=0;

   TRACE("run %s"EOL,argv[0]);


   switch(argc)
   {
      case 1:
            //exit(0);
      break;
      case 2:
      break;
      default:
      break;
   }//switch(argc)


return retv;

}

