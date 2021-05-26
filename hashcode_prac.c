#include <stdio.h>
int main(){
   FILE * file;
   char str[500];
   if (file = fopen("a_example", "r")){
         while(fscanf(file,"%s", str)!=EOF){
         printf("%s", str);
      }
   }
   else
   printf("Error!");
   fclose(file);
   return 0;
}