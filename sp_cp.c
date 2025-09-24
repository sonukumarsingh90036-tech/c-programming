#include<stdio.h>
    int main()
    {
        int cp;
        printf("Enter the cost price : ");
        scanf("%d",&cp);
        int sp;
        printf("Enter the selling price : ");
        scanf("%d",&sp);
if (sp>cp) {
    printf("PROFIT");
}
if(cp>sp)
{
    printf("LOSS");
}
if(cp==sp)
{
    printf("NO PROFIT ,NO LOSS");
}
        return 0;
    }