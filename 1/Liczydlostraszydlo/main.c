#include <stdio.h>

int main() {
    int i,N,j=0,k=0;
    double n,d=0,u=0,suma=0,srpl,sruj;
    do
    scanf("%d",&N);
    while(N<0);
    for(i=1;i<=N;i++){
        scanf("%lf",&n);
        if(n>0){
            d=d+n;
            j=j+1;
        }
        else if (n<0){
            u=u+n;
            k=k+1;
        }
        suma=suma+n;
    }
   
    printf("suma wczytanchy liczb wynosi: %f\n",suma);
    printf("suma liczb >0 wynosi: %f\n",d);
    if(d!=0){
        srpl=d/j;
        printf("srednia liczb dodatnich wynosi %f \n",srpl);
    }
    if(k!=0){
        sruj=u/k;
     printf("srednia liczb ujemnych wynosi %f \n",sruj);
    }
printf("Hello, World!\n");
return 0;
}
