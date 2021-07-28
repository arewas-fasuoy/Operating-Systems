#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char* argv[])   //char* argv[] is an array of Strings 
{

    //argc will be the number of strings pointed to by argv
    printf("Total Number of strings passed to char* argv[]: %d",argc);
    printf("\n");
    
    for (int i = 0; i < argc; i++) 
    {
        
        printf("%s\n", argv[i]);
    }
    
    //char* name[]= {"Ali", "Hassan", "Asim"};
    
    //for(int i=0; i<4; i++)
    //{
    	//printf("%s\n", name[i]);
    //}
   
    
    printf("First Argument is: %s",argv[0]);
    printf("\n");
    
    printf("Second Argument is: %s",argv[1]);
    printf("\n");
    
    printf("Third Argument is: %s",argv[2]);
    printf("\n");
    
    printf("4th Argument is: %s",argv[3]);
    printf("\n");

    return 0;
}
