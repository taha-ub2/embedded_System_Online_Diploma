/*
 * hw4 done by Taha Omar Boulmane on 04/01/2021
 */
#include<stdio.h>
int chek_prime(int n)
{
    int j,flag=0;
    for(j=2;j<=n/2;++j){
        if(n%j==0){
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int n1,n2,i,flag;
    printf("enter two nubers : ");
    scanf("%d %d", &n1, &n2);
    printf("prime numbers inside [/%d,%d/]",n1,n2);
        for(i=n1+1;i<n2;++i)
        {
            flag=chek_prime(i);
            if(flag==0)
                printf("\n%d\t",i);
        }
    return 0;
}
