#include"feature_1.h"

void feature_1(int n, char* files[])
{
	int i,fd[n],bytes;
	char* data;
	data = malloc(sizeof(char*));


	for(i=1;i<n;i++)
	{
		
		if((fd[i] = open(files[i],O_RDONLY)) != -1)
		{
		   fd[i] = open(files[i],O_RDONLY);
		   ostream_print(files[i]);
		   ostream_print("\n");
		   
		   while((bytes = read(fd[i],data,sizeof(char*))) > 0)			
		   {
				  write(1,data,bytes);
	       }
		   
		   ostream_print("\n");
		   close(fd[i]);
		}
		else
		{
			ostream_print(files[i]);
			ostream_print("<- file doesn't exist!!\n");
		}
	}
}

void ostream_print(char* message)
{
	write(1,message,len(message));
}

int len(char* str)
{
	int i;
	for(i=0;str[i];i++);
	return i;
}	
