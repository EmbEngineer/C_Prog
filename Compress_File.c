#include "headers.h"
#include "declaretions.h"

void* Compress_File(void *arg)
{
       int cd,c_fd,ret;
       ds_unique du;

       printf("Begin:%s\n",__func__);
       getchar();
       du.fd = *(int *)(*fptr[6])((void *)"Reading");
       du.ma =(char *)(*fptr[7])((void *)&du);
       printf("Master Arrey:%s\n", du.ma );
       cd = *((int *)(*fptr[9])((void*)du.ma));
       printf("Code Lenght:%d\n",cd);
       if(cd >= 2 && cd <=7)
	   fptr[8+cd]((void *)&du);   
       close(du.fd); 
       printf("Enter the file name for Encryption Key\n");
       c_fd = *(int *)(*fptr[6])((void *)"Writing");
       ret = write(c_fd , du.ma , strlen(du.ma));
       if( ret == -1 )
       {
                perror("write");
                Exti_Func("Failure");
       }
       printf("End:%s\n",__func__);
   return 0;
}
