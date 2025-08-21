# include <stdio.h>
# include <string.h>

int main(){
    char str1[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','\0'};
    char str2[]="asdfkljuqoihsdkmosadflksdfoh";
    char str3[]="ddddddddddddddddddddddd";
    char str4[30];
    int length1=strlen(str1);
    int length2=strlen(str2);

    strcpy(str4,str3);

    printf("the string length of str1 is %d \n",length1);
    printf("the string length of str2 is %d \n",length2);

    printf("copied string is %s \n",str3);

    printf("this is the new string %s \n",strcat(str2,str3));

    printf("first string is %s\n",str3);
    printf("second string is %s\n",str2);
    int comparison=strcmp(str3,str2);

    printf("the comparison of the strings is %d \n",comparison);

    return 0;
}