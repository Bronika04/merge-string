#include<stdio.h>
#include<string.h>
int main(){                                       //concatinate without using built in function
    char str1[40],str2[40];
    printf("enter the first string\n");
    fgets(str1,40,stdin);
    printf("enter the second string\n");
    fgets(str2,40,stdin);
    int l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    printf("%d\n",l1);
    printf("%d\n",l2);
    int j=0;
    for(int i=l1-1;i<(l1+l2)-2;i++){
        str1[i]=str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;
}