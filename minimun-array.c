//Find the Minimum Number in an Array 
 #include <stdio.h>
int main() {
    int myArray[]={1,2,0,4,18,100};
    int min=myArray[0];
    for(int i=1;i<6;i++){
        if(myArray[i]<min){
            min=myArray[i];
        }
    }
    printf("Min=%d",min);
     return 0;
}


// use a function 
//  #include <stdio.h>


// int min_arr(int arr[],int N){
//     int min=arr[0];
//     for(int i=0;i<N;i++){
//         printf("Checking myArray[%d]=%d\n",i,arr[i]);
//            if(arr[i]<=min){
//             min=arr[i];
//             printf("New Min is=%d\n",min);
//             }
//     }
//     return min;
// }

// int main() {
//     int myArray[]={1,2,1,4,18,100};


//     printf("Min=%d",min_arr(myArray,6));
//      return 0;
// }

