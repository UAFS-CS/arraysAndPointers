#include <stdio.h>
#include <stdlib.h>

void show(int array[],int size);

int main(){
   int numbers[]={10,20,30,40,50};
   int *nums;

   nums = malloc(sizeof(int)*5);

   nums[0]=10;
   nums[1]=20;

   show(numbers,5);

   show(nums,2);

   return 0;
}

void show(int array[],int size){
   int index;

   for(index=0;index<size;index++){
      printf("%d ",array[index]);
   }
   printf("\n");
}
