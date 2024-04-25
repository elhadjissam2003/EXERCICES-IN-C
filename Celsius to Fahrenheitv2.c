 #include <stdio.h>
void conversionCToF(float debut,float fin ){
    float F=0;
    float C=0;
    printf("C          F\n");
    for(C=debut;C<fin;C++){
            F=(C*1.8)+35;
            printf("%-8.2f%8.2f\n",C,F);



    }
    F=(C*1.8)+35;
    return F;

}

int main() {
    float C,debut,fin;

    printf("Entrer le debut :");
    scanf("%f",&debut);
    printf("Entrer la fin :");
    scanf("%f",&fin);


    conversionCToF(debut,fin);

     return 0;
}
