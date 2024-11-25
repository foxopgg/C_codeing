#include <stdio.h>
#define SIZE 8
int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0;
    
    /* Input binary string from user */
    gets(binary);

    /* Store all inverted bits of binary value to onesComp */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("-1");
            error = 1;

            /* Exits from loop */
            break;
        }
    }

    /* Marks the end of onesComp string */
    onesComp[SIZE] = '\0';

    /* Check if there are binary string contains no error */
    if(error == 0)
    {
        printf("%s", onesComp);
    }

    return 0;
}