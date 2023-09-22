#include<stdio.h>
struct Date
{
    int dd, mm, yy;

};

void initDate(struct Date* ptrDate)
{
    ptrDate->dd=1;
    ptrDate->mm=1;
    ptrDate->yy=0000;
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("DATE = %02d/%02d/%04d \n",ptrDate->dd,ptrDate->mm,ptrDate->yy);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("please enter the day\n");
    scanf("%d",&ptrDate->dd);

    printf("please enter the month\n");
    scanf("%d",&ptrDate->mm);

    printf("please enter the year\n");
    scanf("%d",&ptrDate->yy);

}
int main()
{

    struct Date k;
    int choice;
    do
    {
        printf("\n MENU \n");
        printf("\n1) init Date\n");
        printf("2) print Date\n");
        printf("3) Accept Date\n");
        printf("0) EXIT\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            initDate(&k);
            break;

        case 2:
            printDateOnConsole(&k);
            break;
        
        case 3:
            acceptDateFromConsole(&k);
            break;
        
        case 0:
            printf("EXITED\n");
            break;
        
        default:
            printf("Invalid Choice");
            break;
        }
    } while (choice!= 0);
    

    return 0;
}