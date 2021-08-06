#include <stdio.h>

int main()
{
    struct Date
    {
        int y,m,d;
    };

    struct Date BS, AD;
    printf("\nEnter a date in B.S. (yy/mm/dd): ");
    scanf("%d%d%d", &BS.y, &BS.m, &BS.d);
    if(BS.d <= 16)
    {
        BS.d = BS.d +30;
        BS.m = BS.m - 1;
    }
    
    if(BS.m <= 8)
    {
        BS.m = BS.m + 12;
        BS.y = BS.y - 1;
    }

    AD.y = BS.y - 56;
    AD.m = BS.m - 8;
    AD.d = BS.d - 16;
    printf("\nRequired date in A.D. is %d-%d-%d", AD.y, AD.m, AD.d);
    return 0;
}