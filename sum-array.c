//Sum the Values in an Array
#include <stdio.h>
int sum_array(int arr[],int N){
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    return sum;

}


int main() {
    int myArray[]={1,2,4,6,85,3,8,3};
    printf("La somme est :%d",sum_array(myArray,8));

     return 0;
}
