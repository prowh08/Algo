#include <cstdio>

int main(int argc, const char * argv[])
{
    int a,num=0;
    
    scanf("%d",&a);
    
    for(int i=1;i<a+1;i++)
        num+=i;
    printf("%d",num);

    return 0;
}
