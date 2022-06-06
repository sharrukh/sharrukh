#include<stdio.h>
/*
 int main()
{
    int pl ,ti ;
    float roi ,sum;
    printf("princple pl=");
    scanf("%d",&pl);
    printf("time ti=");                    //simple intrest
    scanf("%d",&ti);
    printf("rate of intrest roi=");
    scanf("%f",&roi);
    //scanf("%d%d%f",&pl,&ti,&roi);
    sum=pl*ti*roi/100;
    printf("%f",sum);
    return 0;

}

#include<math.h>
main()
{
    int a, v1,v2;
    printf(" value of v1&v2 \n");
    scanf("%d %d",&v1,&v2);                //power function
    a=pow(v1,v2);
    printf("%u",a);
    return 0;
}

main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0)
        printf("even number");              //odd even
    else
        printf("odd number");
    return 0;
}

main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a+b*c-d;                              //simple add
    printf("%d",e);
    return 0;
}

main( )
{
 float bp,da,hra,gpay;
 printf("enter the basic pay=\n");
 scanf("%f",&bp);

   da=0.4*bp;
   hra=0.2*bp;                              //gross pay
   gpay=da+hra+bp;

 printf("\nbasicpay=%f", bp);
 printf("\ndear allowance=%f", da);
 printf("\nhome allowance=%f", hra);
 printf("\ngrosspay=%f", gpay);
}


main()
{
    float km, cm, ft, m, in;
    printf("enter the distance between the two cities");
    scanf("%f",&km);

    cm=km*10000;
    ft=km*3280.84;
    m=km*1000;                     // convertion
    in=km*39370;

    printf("\n centimeter %f",cm);
    printf("\n meter %f",m);
    printf("\n feet %f",ft);
    printf("\n inch %f",in);

    return 0;
}

main()
{
    int En,Ta,Ma,Sc,So, total;
    float avg, per;
    printf("english marks=En ");
    scanf("%d",&En);
    printf("tamil marks=Ta ");
    scanf("%d",&Ta);
    printf("math marks=Ma ");
    scanf("%d",&Ma);
    printf("science marks=Sc ");        //avg
    scanf("%d",&Sc);
    printf("social marks=So ");
    scanf("%d",&So);

    total=En+Ta+Ma+Sc+So;
    avg=total/5;
    per= (total/500) * 100;

    printf("\n total=%d",total);
    printf("\n average=%f",avg);
    printf("\n percentage=%f",per);
    return 0;

}

main()
{
    float l, b, r, ar,pr,co, ao;
    scanf("%f %f %f",&l, &b, &r);
    ar=l*b;
    pr=2*(l+b);
    co=2*3.14*r;                        //area & peri of ret and cir
    ao=3.14*r*r;
    printf("\n ar %f ",ar);
    printf("\n pr %f ",pr);
    printf("\n co %f ",co);
    printf("\n ao %f ",ao);
    return 0;
}

main()
{

float c,f;                      //faren to cel
scanf("%f",&f);
c=(f-32)*5/9;
printf("%f",c);
}

main()
{
    int c, d, temp;
    scanf("%d %d",&c, &d);
    printf("\nvalue of c= %d",c);
    printf("\nvalue of d= %d",d);

    //c=c+d;                          //swap
    //temp=c;
    //d=temp-d;
    //c=c-d;
    temp=c;
    c=d;
    d=temp;

    printf("\nvalue of c= %d",c);
    printf("\nvalue of d= %d",d);
    return 0;

}

main()

{
    int i, n, rem=0;

    scanf("%d",&n);

    while(n!=0)            // sum of num
    {
        rem+=n%10;
        n=n/10;

    }
    printf("%d",rem);
    return 0;
}

main()
{
    float men, women, lm,im , lw, iw, tp, lit;
    scanf("%f",&tp);
    lit=0.48*tp;
    men=0.52*tp;
    women=0.48*tp;
    lm=0.35*lit;
    lw=0.13*lit;                          //  lit&ill
    im=men-lm;
    iw=women-lw;
    printf("\n total men %f",men);
    printf("\n total women %f",women);
    printf("\n lit %f",lit);
    printf("\n literate women %f",lw);
    printf("\n illitrate women %f",iw);
    printf("\n literate men %f",lm);
    printf("\n illitrate men %f",im);
    return 0;
}

main()
{
    int notes,ten, fifty, hundred;
    printf("enter the denomination");
    scanf("%d",&notes);
    ten=notes/10;
    fifty=notes/50;                 //denomination
    hundred=notes/100;

    printf("\n no of 10's= %d", ten);
    printf("\n no of 50's= %d", fifty);
    printf("\n no of 100's= %d", hundred);
    return 0;

}

main()
{
    float top, profit, cp, op;
    printf("enter the total price");
    scanf("%f",& top);
    printf("enter the total profit");
    scanf("%f", &profit);                       //total priceof 15 product

    cp=top-profit;
    op=cp/15;
    printf("\n cost price%f",cp);
    printf("\n original price of each product%f",op);
    return 0;
}

main()
{
    int a,b,c,d;

    printf("enther the number");
    scanf("%d %d %d",&a, &b, &d);

    if (d==1)
        {
            if ((a<20)&&(b<20))
            {
                c=a+b;
            }
            else if ((a>20)&&(b>20))
            {
                c=a-b;
            }
            else
            {
                c=a+a;
            }
            printf("%d",c);
    }
    else
    {
            if ((a<20)&&(b<20))
            {
                c=a*b;
            }
            else
            {
                c=a/b;
            }
            printf("%d",c);
    }
    return 0;
}

main( )
{
 int cp, sp, t;
 printf("enter the cost price");
 scanf("%d",&cp);
 printf("enter the selling price");
 scanf("%d",&sp);

 if(cp<sp)                                                  //chapter 2 q== c(a)
    {
     t=sp-cp;
     printf("\n seller has made profit of rs= %d",t);
    }
  else
    {
     t=cp-sp;
     printf("\n seller has made loss of rs= %d",t);
    }
    return 0;
}

main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    if(i==0)
    {
       printf("given number is even");
    }                                           // q2
    else
    {
        printf("givern number is odd");
    }
    return 0;
}
*/
main()
{
    int y;
    printf("enter the year");
    scanf("%d",&y);
    if((y%4==0)||(y%400==0))
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
    return 0;

}






