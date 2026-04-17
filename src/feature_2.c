#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include"feature_1.h"
#include"feature_2.h"

void feature_2()
{
	char* data = malloc(100);
	int bytes;
	
		   ostream_print("Echo data :");
		   while((bytes = read(0,data,100)) > 0)			
		   {
			   write(1,data,bytes);
	       }
		  ostream_print("\n"); 
}
