#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("\n ****** WELCOME TO THE GAME ZONE ****** \n\n");
    int deposite,betchoice,bet,check;
    int originano,originalno;
    printf("ENTER YOUR DEPOSITE : ");
    scanf("%d",&deposite);
    for(int i=0;i<=deposite;){
        if(deposite<100){
            printf("SORRY ! YOUR DEPOSITE IS LESS THAN 100 SO YOU CAN'T PLAY NEXT TERN ");
            break;
        }
        else{
            printf("ENTER 1 TO PLAY BET OF 100 COINS \n");
            printf("ENTER 2 TO PLAY BET OF 500 COINS \n");
            printf("ENTER 3 TO PLAY BET OF 1000 COINS \n");
            scanf("%d",&betchoice);
    switch(betchoice){
        case 1:
        if(deposite>99){
        srand(time(NULL));
        originalno = rand()%4 + 1 ;
        printf("THE GAME IS SIMPLE I AM THINKING A NUMBER BETWEEN 1 TO 5 YOU GAUSS THESE NUMBER \n");
        printf("LETS START THE GAME : \n");
        printf("PLAY YOUR BET : ");
        scanf("%d",&bet);
        if(originalno==bet){
            printf("****** CONGRATULATIONS YOU WON 100 COINS ******\n");
            deposite+=100;
            printf("YOUR TOTAL DEPOSITE AT THAT TIME IS %d \n",deposite);
        }
        else{
            printf("OOPS ! SORRY YOU LOSS THE GAME \n");
            printf("THE NUMBER WILL BE %d \n",originalno);
            deposite-=100;
            printf("YOUR TOTAL DEPOSITE AT THAT TIME IS %d \n",deposite);
        }
        }
        else{
            printf("INSUFFICIENT BALANCE !! \n");
        }
        break;
    case 2:
    if(deposite>449){
        srand(time(NULL));
        originano = rand()%9 + 1 ;
        printf("THE GAME IS SIMPLE I AM THINKING A NUMBER BETWEEN 1 TO 10 YOU GAUSS THESE NUMBER \n");
        printf("LETS START THE GAME : \n");
        printf("PLAY YOUR BET : ");
        scanf("%d",&bet);
        if(originano==bet){
            printf("****** CONGRATULATIONS YOU WON 500 COINS ******\n");
            deposite+=500;
            printf("YOUR TOTAL DEPOSITE AT THAT TIME IS %d \n",deposite);
        }
        else{
            printf("OOPS ! SORRY YOU LOSS THE GAME \n");
            printf("THE NUMBER WILL BE %d \n",originano);
            deposite-=500;
            printf("YOUR TOTAL DEPOSITE AT THAT TIME IS %d \n",deposite);
        }
    }
    else{
        printf("INSUFFICIENT BALANCE !! \n");
    }
        break;
        case 3:
        if(deposite>999){
        srand(time(NULL));
        int firstno = rand()%100 + 1 ;
        int secondno = rand()%50 + 1 ;
        int originno = firstno*secondno;
        printf(" THE GAME IS SIMPLE I AM SHOW YOU TWO NUMBERS WHICH PRODUCT IS YOU \n");
        printf(" LETS START THE GAME : \n");
        printf(" %d * %d = ? ",firstno,secondno);
        printf(" YOUR ANSWER : ");
        scanf("%d",&bet);
        if(originno==bet){
            printf("****** CONGRATULATIONS YOU WON 1000 COINS ******\n");
            deposite+=1000;
            printf("YOUR TOTAL DEPOSITE AT THAT TIME IS %d \n",deposite);
        }
        else{
            printf("OOPS ! SORRY YOU LOSS THE GAME \n");
            printf("THE NUMBER WILL BE %d \n",originalno);
            deposite-=1000;
            printf("YOUR TOTAL DEPOSITE AT THAT TIME IS %d \n",deposite);
        }
        }
        else{
            printf("INSUFFICIENT BALANCE !! \n");
        }
        break;
        default:
            printf("OOPS ! YOU  WRONG PLEASE TRY AGAIN \n");
            i++;
            
    }
}
    printf("IF YOU WANT TO PLAY THEN PRESS 1 OR EXIT PRESS 0 : ");
    scanf("%d",&check);
    if(check==1){
        i++;
    }
    else{
        printf("THANKING YOU TO PLAYING WITH US YOUR DEPOSITE MONEY IS %d \n",deposite);
        break;
    }
}  
}