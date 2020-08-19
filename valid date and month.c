//**define a structure data type named date containing 3 integers members day, month and year. develop an interactive program to perform the following tasks: 1. to read data into structure members by a function 2. to validate the date entered by another function You11:31 3. to print the date in the format April 29,2002 by a third function for example: 31,4,2002-----is not a valid date as april has 30 days**//
#include<stdio.h>
#include<stdlib.h>
struct det
{
    int day;
    int mon;
    int year;
};
  struct det read ()

{
    struct det a;
       printf("Enter Year :");
       scanf("%d",&a.year);
       printf("Enter Month :");
       scanf("%d",&a.mon);
       printf("Enter Day :");
       scanf("%d",&a.day);
    return(a);
    
}
void valid(struct det a)
{
    
    if(a.mon==1 && a.day>31 || a.mon==3 && a.day>31 || a.mon==5 && a.day>31 ||a.mon==7 && a.day>31 ||a.mon==8 && a.day>31 || a.mon==10 && a.day>31 ||a.mon==12 && a.day>31 )
    {
        printf("INVALID DATE!");
        exit(0);
    }
    else if (a.mon==2 && a.day>29)
    {
        printf("INVALID DATE!");
        exit(0);
    }
    else if(a.day>28)
    {
        printf("\n INVALID DATE!");
        exit(0);
    }
    else if(a.mon==4 && a.day>30 || a.mon==6 && a.day>30 || a.mon==9 && a.day>30 || a.mon==11 && a.day>30 )

    {
        printf("\n INVALID DATE!");
        exit(0);
    }
    else
        printf("\n VALID DATE!");
    }
void display(struct det y)
{
   switch(y.mon)
   {
       case 1 : printf("\n January %d,%d",y.day,y.year);
                break;
       case 2 : printf("\n February %d,%d",y.day,y.year);
                break;
       case 3 : printf("\n March %d,%d",y.day,y.year);
                break;
       case 4 : printf("\n April %d,%d",y.day,y.year);
                break;
       case 5 : printf("\n May %d,%d",y.day,y.year);
                break;
       case 6 : printf("\n June %d,%d",y.day,y.year);
                break;
       case 7 : printf("\n July %d,%d",y.day,y.year);
                break;
       case 8 : printf("\n August %d,%d",y.day,y.year);
                break;
       case 9 : printf("\n September %d,%d",y.day,y.year);
                break;
       case 10 : printf("\n October %d,%d",y.day,y.year);
                break;
       case 11 : printf("\n November %d,%d",y.day,y.year);
                break;
       case 12 : printf("\n December %d,%d",y.day,y.year);
                break;
       default : printf("\n INVALID!");
   }
}
int main()
{
    struct det a;
    a=read();
    valid(a);
    display(a);
    return 0;
}
    
