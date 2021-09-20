#include <stdio.h>


int main(int argc, char *argv[]){
   char value = 'D';
   char *ptr;

   ptr=&value;

   printf("[%x]value %c\n",&value,value);
   printf("[%x]ptr %x --> %c\n",&ptr,ptr,*ptr);

   return 0;
}
