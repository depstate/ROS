#include <stdlib.h>  
#include <stdio.h>  
   
int main(int argc, char *argv[]){
	int x=atoi(argv[1]);
	int y=atoi(argv[2]);
	
	printf("%d + %d =%d\n",x,y,x+y);
	printf("%d - %d =%d\n",x,y,x-y);
	printf("%d * %d =%d\n",x,y,x*y);
	printf("%d / %d =%f\n",x,y,(float)x/y);
	
	exit(0);  
	}
