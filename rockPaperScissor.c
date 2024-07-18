#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf(" ********** WELCOME IN GAME OF ROCK , PAPER , SCISSOR ********** \n");
    int win=0,loss=0,draw=0;
    int n=1;
    char name[20];
    printf("ENTER PLAYER NAME : ");
    scanf("%s",&name);

    while(n<=3){
        int a,b,c;
        srand(time(NULL));
        printf("ENTER 1 FOR ROCK ,\n");
        printf("ENTER 2 FOR PAPER ,\n");
        printf("ENTER 3 FOR SCISSOR ,\n");
        printf("ENTER YOUR OPTION : ");
        scanf("%d",&a);
   
        if(a<0  ||  a>4){
            printf(" ********** PLAYER ENTER INVALID OUTPUT ********** ");
            break;
        }
        c=rand()%3;
        b=c+1;
        printf("SYSTEM ANSWER IS : %d ",b);
        printf("\n");
        if(a==b){
            printf("MATCH IS DRAW\n\n");
            draw++;
        }
        else if((a+1)==b){
            printf("PLAYER LOSS\n\n");
            loss++;
        }
        else if((a-2)==b){
            printf("PLAYER LOSS\n\n");
            loss++;
        }
        else{
            printf("PLAYER WINNER\n\n");
            win++;
        }
        n++;
    }
    if(win>loss){
        if(win>draw){
            printf("%s WINNER WITH %d POINTS.....",name,win);
        }
        else{
            printf("THE GAME WILL BE DRAW ");
        }
    }
    if(win==loss    &&  loss==draw){
        printf("MATCH WILL BE DRAW ");
    }
    else {
        if(loss>draw){
        printf("SYSTEM IS WINNER AGAINST %s WITH %d POINTS.....",name,win);
    }
}
}
