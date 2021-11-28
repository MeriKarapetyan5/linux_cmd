#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

   int main (int argc, char**argv)
{
    const char* folder;
       if(argc<2)
    {
       return 1;
    }
if(strcmp(argv[1],"-f")==0)
{
   for(int i=2; i<argc; ++i)
   {
      int result=remove(argv[i]);
        if (result==0)
{
     printf("successfull D");
}
  else
  {
     printf("unsuccessfull D");
  }
}
    return 0;
} 
   for(int i=1; i<argc; ++i)
{
    folder=(argv[i]);
    struct stat s;
if(stat(folder, &s)==0 && S_ISDIR(s.st_mode))
{
    continue;
}
    int result=remove(argv[i]);
 if (result==0)
{
    printf("successfull F");
}
else
{
    printf("unsuccessfull F");
}
}
    return 0;
}
