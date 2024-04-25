//Check If A String Is A Palindrome 
#include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
 bool palindrome_string(char *str)
{
    int middle=strlen(str)/2;
for(int i=0;i<middle;i++){
 if(str[i]!=str[strlen(str)-i-1]){
                return false;

             }
}
return true;
}


int main() {
    char *string="cac";
    if(palindrome_string(string)){
        printf("%s is palindrome",string);
    }else{
        printf("%s is not palindrome",string);
    }

     return 0;
}
