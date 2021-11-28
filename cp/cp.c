#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char**argv) //argc-argumentneri qanaky
{ 
    char buffer[1024]; 
    int SourceFile, TargetFile;
    size_t count; 

    if(argc<3) 
    { 
      return 1; 
    }
    SourceFile=open(argv[1], O_RDONLY); 
    if(SourceFile==-1)  //chi bacvel
    { 
        return 1; 
    }        
    TargetFile=open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR | S_IROTH); 
    if(TargetFile==-1) 
    {
        close(SourceFile); 
        return 1;
    }
    while((count=read(SourceFile, buffer, sizeof(buffer)))!=0) 
    {
      write(TargetFile, buffer, count); 
    }
    close(SourceFile);
    close(TargetFile);
    return 0;
}
