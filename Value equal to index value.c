#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("ENTER THE ARRAY SIZE\n");
    scanf("%d",&a);
    int b[a];
    printf("ENETR THE ELEMENT TO THE ARRAY\n");
    for (i=0;i<a;i++);
    {
        scanf("%d",&b[i]);
    }
    printf("ENTER ELEMENT IS ");
    for(i=0;i<a;i++)
    {
    printf("\t\tTHE ENTERED ELEMENTS ARE [%d]\tINDEX OF THE ELEMENTS[%d]\n",b[i],i);
    }
    for(i=0;i<a;i++)
    {
        if(i==b[i]){
    printf("THE ENTERED ELEMENTS ARE %d\n",b[i]);}
    }
    getch();
    return 0;
}
