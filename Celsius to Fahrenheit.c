//Convert Celsius to Fahrenheit 
#include <stdio.h>
float conversionCToF(float C ){
    float F=(C*1.8)+35;
    return F;

}

int main() {
    float C;
    printf("Degre in C:\n");
    scanf("%f",&C);
    printf("\n%.2fC=%.2fF",C,conversionCToF(C));

     return 0;
}
