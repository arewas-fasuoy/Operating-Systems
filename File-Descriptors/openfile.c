#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char* argv[])
{
    char *path = argv[1];
    //printf("Total Arguments: %d",argc);
    //printf("\n");
    
    //int fd= open ("myfile33.txt", O_WRONLY | O_EXCL | O_CREAT);
    int fd= open(path, O_WRONLY | O_EXCL | O_CREAT); //file descriptor
    
    printf("\nFD: %d\n",fd);
    
    if(fd==-1)
    {
    	printf("Error: File not created\n");
    	return 1;
    } 
    

    //printf("First Argument is: %s",argv[0]);
    //printf("\n");
    
    //printf("Second Argument is: %s",argv[1]);
    //printf("\n");
    
    //printf("Third Argument is: %s",argv[2]);
    //printf("\n");
    
    //printf("4th Argument is: %s",argv[3]);
    //printf("\n");

    return 0;
}
