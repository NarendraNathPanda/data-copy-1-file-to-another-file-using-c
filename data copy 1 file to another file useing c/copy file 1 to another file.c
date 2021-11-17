/*Wrire a Program to copy the content of one file to another.*/

#include <stdio.h>
int main()
{
   char ch;
   FILE *source, *target;

   char source_file[20], destination_file[20];

   printf("Enter file name: ");
   scanf("%s", source_file);
 

   source = fopen(source_file, "r");
   if (source == NULL)
   {
      printf("Input file is not found.\n");
      fclose(source);
   }
   else{
   printf("Enter file name: ");
   scanf("%s", destination_file);
      target = fopen(destination_file, "r");
      if (target == NULL){
             printf("Input file is not found. It's generating automatically......\n");
             target = fopen(destination_file, "w");
                while ((ch = fgetc(source)) != EOF)
                        fputc(ch, target);
                  printf("File copied successfully.\n");
      fclose(source);
      fclose(target);
   }else{
       target = fopen(destination_file, "r");
      char ch1 = fgetc(target);
      if(ch1 != EOF){
         printf("This file have already store some data.\n");
         printf("Copy date replace with old.\n");
           target = fopen(destination_file, "w");
                while ((ch = fgetc(source)) != EOF)
                        fputc(ch, target);
                  printf("File copied successfully.\n");
         fclose(source);
      fclose(target);
      }else{
              target = fopen(destination_file, "w");
                while ((ch = fgetc(source)) != EOF)
                        fputc(ch, target);
                  printf("File copied successfully.\n");
         fclose(source);
      fclose(target);
      }
   }
   }
   return 0;
}