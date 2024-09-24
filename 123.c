#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int version,people,daily,actcount,actget,need,total;
    scanf("%d %d %d %d %d",&version,&people,&daily,&actcount,&actget);
    int canget = version*actcount*actget;
    if (daily){
        canget = canget + version*42*60;
    }
    need = (7-people)*160*160;
    total = (need - canget)/2;

}