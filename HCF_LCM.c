#include <stdio.h>

int main()
{
    int a, b, t, hcf, lcm;
    printf("enter two integers : ");
    scanf("%d %d", &a, &b);

   if(a>b){
    for(int i=a;0<i<=b;i--){
        if(a%i==0 && b%i==0){
            printf("hcf is = %d\n",i);
            break;
        }
    }
   }
   if(a<b){
    for(int i=b;0<i<=a;i--){
        if(a%i==0 && b%i==0){
            printf("hcf is = %d\n",i);
            break;
        }
    }
   }

    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            printf("lcm is = %d\n",i);
            break;
        }
    }
    
    return 0;
}