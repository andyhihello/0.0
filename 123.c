#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long version,people,daily,actcount,actget,need,total;
    scanf("%d %d %d %d %d",&version,&people,&daily,&actcount,&actget);
    long long canget = version*actcount*actget;
    if (daily){
        canget = canget + version*42*60;
    }
    need = (7-people)*160*160;
    total = (need - canget)/2 + ((need - canget)%2) ;
    if (total <= 0){
        printf("It's enough");
        return 0;
    }
    else if (total <= 1000){
        printf("%d For wanderer, it worth.",total);
       
        return 0;
    }
    else if (total <= 5000){
        printf("%d Barely ok",total);
        return 0;
    }
    else {
        printf("%d So love will disappear, right?",total);
        return 0; 
    }

}
