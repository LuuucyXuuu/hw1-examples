#include<stdio.h>

int main(int argc, char *argv[]) 
{

    /*for (int i = 1; i < argc; ++i)
    	{
    	char c = argv [i][0];
    	switch (c) {
    		case('1'):
    			printf("one\n");
    			break;
    		case('2'):
    			printf("two\n");
    			break;
    		default:
    			printf("default\n");
    	}
    }*/
    for (int i = 1; i < argc; ++i){
    	if(strcmp(argv[i], "1") == 0) {
			printf("one\n");
		} else if (strcmp(argv[i], "2") == 0)
			printf("two\n")
    }
    return 0;
}


