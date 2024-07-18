#include<stdio.h>
#include<conio.h>
int n=-1,b;
void board();
void checkToWin();
char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
    char symbol;
    char p1[15],p2[15];
    printf("ENTER 1st PLAYER NAME : ");
    gets(p1);
    printf("ENTER 2nd PLAYER NAME : ");
    gets(p2);
    printf("\n\a\n");
    printf("*******WELCOME TO TIC TAC TOE*******\n\n");
    while(n==-1){
    board();
    int player = (player%2==0)   ?   2   :   1;
    symbol =(player%2==0)   ?  'X'   : 'O'   ;
    printf("CHOICE : ");
    scanf("%d",&b);
    if(b<1  ||b>9){
        printf("INVALID INPUT");
        break;
    }
    arr[b]=symbol;
    player++;
    checkToWin();
    }
    if(symbol=='X'){
        printf("%s IS WINNER",p1);
    }
    else{
        printf("%s IS WINNER",p2);
    }
}
void board(){
    printf("            *           *           \n");
    printf("            *           *           \n");
    printf("    %c       *     %c     *     %c     \n",arr[1],arr[2],arr[3]);
    printf("            *           *           \n");
    printf("************************************\n");
    printf("            *           *           \n");
    printf("            *           *           \n");
    printf("    %c       *    %c      *     %c    \n",arr[4],arr[5],arr[6]);
    printf("            *           *           \n");
    printf("************************************\n");
    printf("            *           *           \n");
    printf("            *           *           \n");
    printf("    %c       *    %c      *     %c     \n",arr[7],arr[8],arr[9]);
    printf("            *           *           \n");
        return;
}
void checkToWin(){
    if(arr[0]==arr[1]   &&arr[1]==arr[2]){  //FOR ROWS
        n++;
        return;
    }
    if(arr[3]==arr[4]   &&arr[4]==arr[5]){
        n++;
        return;
    }
    if(arr[6]==arr[7]   &&arr[7]==arr[8]){
        n++;
        return;
    }
    if(arr[0]==arr[3]   &&arr[3]==arr[6]){  //FOR COLUMNS
        n++;
        return;
    }
    if(arr[1]==arr[4]   &&arr[4]==arr[7]){
        n++;
        return;
    }
    if(arr[2]==arr[5]   &&arr[5]==arr[8]){
        n++;
        return;
    }
    if(arr[0]==arr[4]   &&arr[4]==arr[8]){  //FOR CROSS
        n++;
        return;
    }
    if(arr[2]==arr[4]   &&arr[4]==arr[6]){
        n++;
        return;
    }
    return;
}