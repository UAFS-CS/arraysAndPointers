#include <stdio.h>


int main(int argc, char *argv[]){
   int values[]={5,6,8,7,9};
   int index;
   int *ptr;
   ptr=values;

   char str[]="Hello World";
   char *cptr;
   cptr=str;

   for(index=0;index<5;index++){
      printf("values: %d ",*(values+index));
   }
   printf("\n");

   for(index=0;index<5;index++){
      printf("ptr: %d ",*ptr);
      ptr++;
   }
   printf("\n");
  
   while(*cptr!='\0'){
      printf("%c",*cptr);
      cptr++;
   }
   printf("\n");



   return 0;
}
