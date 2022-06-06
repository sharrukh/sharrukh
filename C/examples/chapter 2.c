#include<stdio.h>
/*
main()
{
    int y, gy, ly, nly, t, d;
    gy=1900;
    scanf("%d",&y);
    y=y-1;
    nly=y*365;
    ly=y/4+y/400-y/100;
    t=ly+nly;
    d=t%7;
    if (d==0)
    {
        printf("monday");
    }
    else if (d==1)
    {
        printf("tuesday");
    }
    else if (d==2)
    {
        printf("wednesday");
    }
    else if (d==3)
    {
        printf("thursday");
    }
    else if (d==4)
    {
        printf("friday");
    }
    else if (d==5)
    {
        printf("saturday");
    }
    else
    {
        printf("sunday");
    }

    return 0;
}

main()
{
    int r, s, a;
    scanf("%d %d %d",&r, &s, &a);
    if((r<s)&&(r<a))
    {
        printf("r is smaller than other two");
    }
    if ((s<r)&&(s<a))
    {
        printf("s is smaller");
    }
    else
    {
        printf("a is smaller");
    }
    return 0;
}

main()
{
    int a, b, c, t;
    scanf("%d%d%d",&a, &b, &c);
    t=a+b+c;
    if(t==180)
    {
        t=a+b+c;
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
    return 0;
}*
main()
{
    int a, p, l, b;
    scanf("%d%d",&l, &b);
    a=l*b;
    p=2*(l+b);
    if(a>p)
    {
        printf("area is greater than perimeter");
    }
    else
    {
        printf("area is not greater than its perimeter");
    }
    return 0;
}
*
 int main()
{
    int h, c, t;
    printf("hardness");
    scanf("%d",&h);
    printf("carbon");
    scanf("%d",&c);
    printf("tensile");
    scanf("%d",&t);

    if((h>50)&&(c<0.7)&&(t>5600))
       {
           printf("grade is 10");
       }
    if ((h>50)&&(c<0.7)&&(t<5600))
        {
            printf("grade is 9");
        }
    if ((h<=50)&&(c<0.7)&&(t>5600))
        {
            printf("grade is 8");
        }
    if ((h>50)&&(c>=0.7)&&(t>5600))
        {
            printf("grade is 7");
        }
    if ((h>50)||(c< 0.7)||(t>5600))
        {
            printf("grade is 6");
        }
    else
    {
        printf("grade is 5");
    }
    return 0;
}

*/
  main( )
{
 int k, num = 30 ;
 k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;
 printf ( "\n%d", num ) ;
}
