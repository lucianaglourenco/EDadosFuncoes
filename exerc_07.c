
# include<stdio.h>


int  fatorial ( int num) {
    int fatorial;
    for(fatorial = 1 ; num> 1 ; num --) {
        fatorial = fatorial * num;
    }
    return fatorial;
}

int  main () {                           
 int num;
 printf("\n\tDigite un numero:");
 scanf("%d",&num);
 printf("\n\tO fatorial de %d = %d\n\n",num,fatorial(num));
 
 
system("pause");
return 0;
}
