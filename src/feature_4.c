#include"feature_4.h"

void feature_4(int n, char* files[])
{
	int i,fd,bytes;
	char* data;
	
 	data = malloc(sizeof(char*));
	fd = open(files[1],O_RDONLY);
	
		   while((bytes = read(fd,data,sizeof(char*))) > 0)		
		   {
				write(1,data,bytes); 
	       }


}
