
#include <stdio.h>
int main()
 {
    char s;
    int r,b,h,l,a;
    printf("Choose 'x' for circle,'' for triangle and'z' for rectangle\n");
    printf("Enter the shape you want\n");
    scanf("%c",&s);
    if(s== 'x')
     {
        printf("Enter the radius\n");
        scanf("%d",&r);
        printf("Area of the circle=%d\n",3*r*r);
     }
     else if (s=='y')
    {
     printf("Enter the base and the height of the triangle\n");
     scanf("%d %d",&b,&h);
     printf("Area of the triangle=%f\n",0.5*b*h);
    }
    else if (s== 'z')
    {
    printf("Enter the length and breadth respectively");
    scanf("%d %d",&l,&a);
    printf("Area of the rectangle=%d\n",2*(l+a));
    }

    


    return 0;
}
