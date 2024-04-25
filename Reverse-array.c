//Reverse An Array
#include <stdio.h>
void reverse_Array(int arr[],int N){
int temp=0;
  for(int i=0;i<N/2;i++){
        int temp=arr[i];
        arr[i]=arr[N-1-i];
        arr[N-1-i]=temp;


   }
}
 void affiche_Array(int arr[],int N){
     for(int i=0;i<N;i++){
         printf("Arr[%d]=%d\n",i,arr[i]);

     }
 }


int main() {
    int myArray[]={1,2,3,4,5,6,7,8};
    reverse_Array(myArray,8);
    affiche_Array(myArray,8);



     return 0;
}
