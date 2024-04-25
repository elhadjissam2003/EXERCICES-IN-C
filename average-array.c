//Compute the Average of an Array
#include <stdio.h>
float average_array(int arr[],int N){
    float avg=0;
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    avg=(float)sum/N;
    return avg;

}


int main() {
    int myArray[]={4,2,4,6,85,3,8,5};
    printf("average of the array is  :%f",average_array(myArray,8));

     return 0;
}
