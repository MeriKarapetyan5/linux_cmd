
//exit-0, cd-1, cp-2, mv-3, rm-4

#include <stdio.h>
#include <sys/types>
#include <unistd.h>
#include <stdlib.h>

 int main()
{
    while(1)
 {
    int cmd;
    scanf("%d", &cmd);
    
    if(cmd==0) 
    {
       break;
    }

}
     else if(cmd==1) 
    {
       char cd1[1000];
       scanf("%s", &cd1);
       
    pid_t pid=fork();
       
        if(pid==0) //child process
      {
         char*arr[]={"../bin/cd", cd1, NULL};
         execv(arr[0], arr);
      }  
       break;
       
    }///cd.end
    
     else if(cmd==2) 
    {
       char cp1, cp2;
       scanf("%s %s", &cp1, &cp2);  
       
    pid_t pid=fork();
       
        if(pid==0) //child process
      {
         char*arr1[]={"../bin/cp", cp1, cp2, NULL};
         execv(arr1[0], arr1);
      }  
       break;
       
    }///cp.end
    
     else if(cmd==3) 
    {
       char mv1, mv2;
       scanf("%s %s", &mv1, &mv2);  
       
    pid_t pid=fork();
       
        if(pid==0) //child process
      {
         char*arr2[]={"../bin/mv", mv1, mv2, NULL};
         execv(arr2[0], arr2);
      }  
       break;
       
    }///mv.end
    
      else if(cmd==4) 
    {
       char rm;
       scanf("%s", &rm);  
       
    pid_t pid=fork();
       
        if(pid==0) //child process
      {
         char*arr3[] = {"../bin/rm", rm, NULL};
         execv(arr3[0], arr3);
      }  
       break;
       
    }///rm.end
    

  default;
  printf("Please be carefull\n");

  }

 }
 return 0;
