#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
 
   fp = fopen("D:/runnoob/My-first-demo/File/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}