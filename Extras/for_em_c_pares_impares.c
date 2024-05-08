int main()
{
    #include <stdio.h>
    int i,num =0;
    for(i=1;i<=30;i++){
        scanf("%d",&num);
        if(num % 2 ==0){
            printf("%d e par");
            
        } else {
            printf("%d e impar");
            
        }
    }
}