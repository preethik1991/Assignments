/*Program to implement bubble sort
 Input  : Numbers to be sorted
 Output :Sorted numbers
Date   :04/09/2012
*/

#include<stdio.h>

void main() {

 int index1,index2,num,array[50],temp;

 printf("Enter the the no. of elements to be sorted\n");
 scanf("%d",&num);

 printf("Enter the elements to sorted\n");
 for(index1=0;index1<num;index1++)
 {
     scanf("%d",&array[index1]);
 }

 for(index1=0;index1<num;index1++) 
 {
     for(index2=index1+1;index2<num;index2++)
     {
         if(array[index1]>array[index2])
         {
             temp=array[index1];
             array[index1]=array[index2];
             array[index2]=temp;
         }
     }
 }

 printf("The sorted list is: \n");
 for(index1=0;index1<num;index1++) {
     printf("%d\t",array[index1]);
 }

}
