//Count the Occurrences of a Value in an Array
#include <stdio.h>

int count_occcu(int arr[],int N,int find){
int compt=0;
for(int i=0;i<N;i++){
    if(arr[i]==find){
        compt++;
    }
}
return compt;
}


int main() {
    int myArray[]={1,2,2,3,4,2,7,8};
    int x=2;
    printf("Number of occurences for %d is %d",x,count_occcu(myArray,8,x));


     return 0;
}
