#include <cstdio>

int main(int argc, const char * argv[])
{
    int a,num,cnt=0;
    
    scanf("%d",&a);
    num=a;
    
    while(true){
        if(a<10)
            a = a*10+a;
        else{
            a = (a%10)*10+((a/10)+(a%10))%10;
        }
        cnt+=1;
        if(a==num)
            break;
    }
    printf("%d",cnt);
    return 0;
}