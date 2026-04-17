#include"feature_1.h"
#include"feature_2.h"
#include"feature_3.h"
#include<string.h>

void main(int n ,char *files[]){

	
	if(n == 1)
	feature_2();
    else if(strcmp(files[1], "-n")==0)
    feature_3(n, files);
 	else if((n > 1) && (files[1] != "-n"))
	feature_1(n, files);
    else;
}
