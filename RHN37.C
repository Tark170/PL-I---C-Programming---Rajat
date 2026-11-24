#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];

    printf("\n Enter First String: ");
    scanf("%s", str1);
    printf("\n Enter Second String: ");
    scanf("%s", str2);

    strcpy(str3, str1);
    printf("\n Copied String: %s", str3);

    printf("\n Reverse of First String: %s", strrev(str1));

    printf("\n Length of First String: %d", strlen(str1));
    printf("\n Length of Second String: %d", strlen(str2));

    if (strcmp(str1, str2) == 0)
    {
        printf("\n Both Strings are Equal");
    }
    else
    {
        printf("\n Both Strings are Not Equal");
    }

    strcat(str1, str2);
    printf("\n Concatenated String: %s", str1);

    return 0;
}
