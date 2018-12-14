
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "my_include.h"


#if 0
{
	char ip[16]={0};  // allochiamo un array di 16 char perche' nel caso peggiore 192.156.111.222
	char ip_1[4]={0};  // parte piu' significativa del'ip
	
	int i=0;
	
    while(1)
	{
		if((ip[i]=='.')||(i>15))
		   break;
		ip_1[i]=ip[i];
		i++;
	}
	
}
#endif


#if 0
queste sono le maschere per determinare i 
valori associati ai relativi bit....
attraverso l'utilizzo dell'operatore & and
#endif


#define MASK_CLASS_A	0x80  // 1000_0000
#define MASK_CLASS_B	0xC0  // 1100_0000 
#define MASK_CLASS_C	0xE0  // 1110_0000
#define MASK_CLASS_D_E	0xF0  // 1111_0000


#define CLASS_A	0x01
#define CLASS_B	0x02
#define CLASS_C	0x03
#define CLASS_D	0x04
#define CLASS_E	0x05

uint8_t get_ip_class(uint8_t ip_class)
{
	uint8_t retv=0;
	
    ip_class=get_ip_class("192.168.3.1");
	// in ip_class c'e' un numero ad 8 bit 
	
	if(ip_class&MASK_CLASS_A==0x00)
	{
	    retv=CLASS_A;	
	}
	if(ip_class&MASK_CLASS_B==0x80)
	{
	    retv=CLASS_B;	
	}
	if(ip_class&MASK_CLASS_C==0xC0)
	{
	    retv=CLASS_C;	
	}
	if(ip_class&MASK_CLASS_D_E==0xE0)
	{
	    retv=CLASS_D;	
	}
	if(ip_class&MASK_CLASS_D_E==0xF0)
	{
	    retv=CLASS_E;	
	}
	return retv;
	
}//uint8_t get_ip_class(uint8_t ip_class)





#define _DEBUG_         1

#define TRACE           (_DEBUG_ == 0) ? (void) 0 : printf
#define EOL     "\r\n"

#ifdef _MAIN_

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
#endif

