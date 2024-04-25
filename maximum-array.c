Find the Maximum Number in an Array 
 #include <stdio.h>
int main() {
    int myArray[]={1,2,0,4,18,100};
    int max=myArray[0];
    for(int i=1;i<6;i++){
        if(myArray[i]>max){
            max=myArray[i];
        }
    }
    printf("Max=%d",max);
     return 0;
}


// use a function 
//  #include <stdio.h>


// int max_arr(int arr[],int N){
//     int max=arr[0];
//     for(int i=0;i<N;i++){
//         printf("Checking myArray[%d]=%d\n",i,arr[i]);
//            if(arr[i]>max){
//             max=arr[i];
//             printf("New Max is=%d\n",max);
//             }
//     }
//     return min;
// }

// int main() {
//     int myArray[]={1,2,1,4,18,100};


//     printf("Max=%d",max_arr(myArray,6));
//      return 0;
// }
