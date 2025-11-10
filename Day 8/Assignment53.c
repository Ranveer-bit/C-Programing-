#include <stdio.h>

int main() {
    char str1[100], str2[100], copy[100];
    int i, len = 0, flag = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    
    for (i = 0; str1[i] != '\0'; i++)
        len++;
    printf("\nLength of first string: %d", len);

   
    for (i = 0; str1[i] != '\0'; i++)
        copy[i] = str1[i];
    copy[i] = '\0';
    printf("\nCopied string: %s", copy);

    
    flag = 0;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

 
    int j;
    for (i = 0; str1[i] != '\0'; i++); 
    for (j = 0; str2[j] != '\0'; j++, i++)
        str1[i] = str2[j];
    str1[i] = '\0';

    printf("\nConcatenated string: %s\n", str1);

    return 0;
}