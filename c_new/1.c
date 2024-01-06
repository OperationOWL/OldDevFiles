#include<stdio.h>
#include<string.h>

int main(){
    char str_1[100];
    char str_2[100];
    char str_3[100];

    printf("enter string 1: ");
    fgets(str_1, 100, stdin);

    printf("enter string 2: ");
    fgets(str_2, 100, stdin);
    
    for(int i=0; i<strlen(str_1)-1; i++){
        int to_be_added=1;
        int count=0;
        for (int j=0; j<strlen(str_2)-1; j++){
            if(str_1[i]==str_2[j]){
                to_be_added = 0;
                count++;
                break;
            }
            else{
                continue;
            }
        }
        if (to_be_added == 1){
            str_3[strlen(str_3)] = str_1[i];
        }
        to_be_added = 1;
    }

    for(int i=0; i<strlen(str_2)-1; i++){
        int count=0;
        for (int j=0; j<strlen(str_1)-1; j++){
            if(str_2[i]==str_1[j]){
                count++;
            }
            else{
                continue;
            }
        }
        printf("%d\n", count);
    }

    printf("%s\n", str_3);
    return 0;
}