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
