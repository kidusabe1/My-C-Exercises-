#include <stdio.h>
#include <conio.h>
#include <string.h>
char square[]={'0','1','2','3','4','5','6','7','8','9'};
int choice;
int player=1,i;

void board();
int stat();

int main()
{
    char mark;
    do{
        board();
        player=(player%2)? 1 : 2;
        printf("Player %d Enter a number\n", player);
        scanf("%d",&choice);
        mark=(player%2)? 'X': 'O';
        if(choice==1 && square[1]=='1')
            square[1]=mark;
        else if(choice==2 && square[2]=='2')
            square[2]=mark;
        else if(choice==3 && square[3]=='3')
            square[3]=mark;
        else if(choice==4 && square[4]=='4')
            square[4]=mark;
        else if(choice==5 && square[5]=='5')
            square[5]=mark;
        else if(choice==6 && square[6]=='6')
            square[6]=mark;
        else if(choice==7 && square[7]=='7')
            square[7]=mark;
        else if(choice==8 && square[8]=='8')
            square[8]=mark;
        else if(choice==9 && square[9]=='9')
            square[9]=mark;
        else
            {
                printf("INVALID MOVE\n");
                player--;
                getch();
            }
        i= stat();
        player++;
    }while(i==1);

    if(stat()==0)
    printf("Game draw\n");
    
    else if(stat()==-1)
    printf("Game Over!\n Player %d won the game! Congratulations!",player--);
}

/* return value 1 is for ongoing game
   return value -1 is for game over
   return value 0 is for Game draw
*/ 

int stat()
{
    if(square[1]==square[2] && square[2]==square[3])
    return -1;
    else if(square[4]==square[5] && square[5]==square[6])
    return -1;
    else if(square[7]==square[8] && square[8]==square[9])
    return -1;
    else if(square[1]==square[4] && square[4]==square[7])
    return -1;
    else if(square[2]==square[5] && square[5]==square[8])
    return -1;
    else if(square[3]==square[6] && square[6]==square[9])
    return -1;
    else if(square[1]==square[5] && square[5]==square[9])
    return -1;
    else if(square[3]==square[5] && square[5]==square[7])
    return -1;
    else if(square[4]==square[5] && square[5]==square[6])
    return -1;
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
    return 0;
    else
    return 1;
}   

void board()
{
    printf("             Tic Tac Toe Game\n");
    printf("         Player 1(X) Vs Player 2(O)\n");
    printf("\n\n");
    printf("                   |    |    \n");
    printf("                 %c | %c  |  %c\n",square[1],square[2],square[3]);
    printf("               ____|____|____\n");\
    printf("                   |    |    \n");
    printf("                 %c | %c  |  %c\n",square[4],square[5],square[6]);
    printf("               ____|____|____\n");
    printf("                   |    |    \n");
    printf("                 %c | %c  |  %c\n",square[7],square[8],square[9]);
    printf("                   |    |    \n");
    printf("\n");
}