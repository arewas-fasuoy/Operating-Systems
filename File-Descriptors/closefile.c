#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char* argv[])
{
    
    if(argc!=2)
    {
    	printf("Error: Run like this:\n");
    	printf("%s name-of-new-file\n", argv[0]);
    	//printf("%s name-of-new-file\n", argv[1]);
    	return 1;
    } 
    
    char *path = argv[1];
    
    int i=0;
    while(i<6)
    {
    	int fd= open (path, O_WRONLY | O_CREAT);
    	printf("Created! Descripter is %d\n", fd);
        //close(fd);
    	i++;
    }
    


    return 0;
}
