#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<time.h>

char* get_timeStamp()
{	
	
    time_t now=time(NULL);
    //printf("The linux time is: %ld\n", now);
    
    //printf("Local time and date: %s\n",asctime(localtime(&now)));
    
    return asctime(localtime(&now));  //localtime(&now) Get the localtime
}

int main(int argc, char* argv[])
{
    
    char *filename = argv[1];
    
    char *timeStamp=get_timeStamp();
    
    int fd= open(filename,O_WRONLY |O_APPEND | O_CREAT,0666);
    //int fd= open(filename,O_WRONLY |O_CREAT,0666);
    

    size_t length = strlen(timeStamp);
    //size_t lenght = strlen(timeStamp)-5;    
    write(fd, timeStamp, length);
    
    close(fd);

    return 0;
}
