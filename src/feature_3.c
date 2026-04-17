#include"feature_3.h"
#include"feature_1.h"

int line_no=0;
void feature_3(int n, char* files[])
{
	int i,fd[n],bytes;
	char* data;
	data = malloc(sizeof(char*));


	for(i=2;i<n;i++)
	{
		if((fd[i] = open(files[i],O_RDONLY)) != -1)
		{
		   fd[i] = open(files[i],O_RDONLY);
		   ostream_print(files[i]);
		   ostream_print("\n");
		
		   print_lines();
		   
		   while((bytes = read(fd[i],data,sizeof(char*))) > 0)			
		   {
			      core(data,bytes);
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

void core(char* data, int bytes)
{
	int i;
	
	for(i=0;(i<bytes);i++)
	{
		write(1,&data[i],1);
	    if(data[i] == '\n')
		{
			print_lines();
		}
	}
	
}

void print_lines()
{
	char *s = malloc(sizeof(char*));
	sprintf(s,"%d",line_no);
    write(1,s,len(s));
    write(1," ",1);
    line_no++ ; 
}
