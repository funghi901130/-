#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,k,a,b,c,d;
    printf("enter your number[a][b]*[c][d] \t");
    printf("!!{b=c}!!  ");
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){
         if(b==c){
        int A[a+1][b+1],B[c+1][d+1],sum=0;

    //A
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
          printf("A[%d][%d] ",i,j);
          scanf("%d",&A[i][j]);
        }
    }
   //B
    for(i=1;i<=c;i++){
        for(j=1;j<=d;j++){
                printf("B[%d][%d] ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    //C=A+B
    int C[a+1][d+1];
    for(i=1;i<=a;i++){
        for(j=1;j<=d;j++){
            for(k=1;k<=c;k++){
            sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }
    //c
    for(i=1;i<=a;i++){
        for(j=1;j<=d;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
 }
 else{
    printf("please try again\n");
    printf("!!{b=c}!!");
        }
    }
    return 0;
}
