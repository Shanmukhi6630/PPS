#include<stdio.h>
char box[10] = {'0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
void board();
int winner(char mark);
int entry(int player,int choice);
int main()
{
        int choice,status,player = 1;
        char mark;
        do
        {
                board();
                player = (player%2==1)? 1:2;
                printf("Player %d,select a box:  ",player);
                scanf("%d",&choice);
                entry(player,choice);
                status = winner(mark);
                player++;
        }while(status==0);
        board();
        if(status==1)
        {
                printf("Congratulations!!!\aPlayer %d wins!!!\n",--player);
        }
        else
        {
                printf("\aTIE!!!\n");
        }
        return 0;
}
int entry(int player,int choice)
{
        char mark;
        mark = (player==1)? 'X':'O';
        if(choice == 1 && box[1] == ' ')
        {
                box[1] = mark;
        }
        else if(choice == 2 && box[2] == ' ')
        {
                box[2] = mark;
        }
        else if(choice == 3 && box[3] == ' ')
        {
                box[3] = mark;
        }
        else if(choice == 4 && box[4] == ' ')
        {
                box[4] = mark;
        }
        else if(choice == 5 && box[5] == ' ')
        {
                box[5] = mark;
        }
        else if(choice == 6 && box[6] == ' ')
        {
                box[6] = mark;
        }
        else if(choice == 7 && box[7] == ' ')
        {
                box[7] = mark;
        }
        else if(choice == 8 && box[8] == ' ')
        {
                box[8] = mark;
        }
        else if(choice == 9 && box[9] == ' ')
        {
                box[9] = mark;
        }
        else
        {
                printf("Invalid Move\n");
                return player -= 1;
        }
}
int winner(char mark)
{
                if((box[1]==box[2]&&box[2]==box[3]&&box[1]!=' ')||(box[4]==box[5]&&box[5]==box[6]&&box[4]!=' ')||(box[7]==box[8]&&box[8]==box[9]&&box[7]!=' '))
                {
                        return 1;
                }
                else if((box[1]==box[4]&&box[4]==box[7]&&box[1]!=' ')||(box[2]==box[5]&&box[5]==box[8]&&box[2]!=' ')||(box[3]==box[6]&&box[6]==box[9]&&box[3]!=' '))
                {
                        return 1;
                }
                else if((box[1]==box[5]&&box[5]==box[9]&&box[1]!=' ')||(box[3]==box[5]&&box[5]==box[7]&&box[3]!=' '))
                {
                        return 1;
                }
        else if(box[1]!=' '&&box[2]!=' '&&box[3]!=' '&&box[4]!=' '&&box[5]!=' '&&box[6]!=' '&&box[7]!=' '&&box[8]!=' '&&box[9]!=' ')
        {
                return 2;
        }
        else
        {
                return 0;
        }
}
void board()
{
        printf("\n\n\t\tTIC TAC TOE\n\n");
        printf("\tPlayer 1 (X) ::: Player 2 (O)\n\n");
        printf("\t\t\t      |      |       \n");
        printf("\t\t\t   %c  |   %c  |   %c  \n",box[1],box[2],box[3]);
        printf("\t\t\t     _______|______|_______\n");
        printf("\t\t\t      |      |         \n");
        printf("\t\t\t         %c  |   %c  |   %c  \n",box[4],box[5],box[6]);
        printf("\t\t\t     _______|______|_______\n");
        printf("\t\t\t            |      |       \n");
        printf("\t\t\t         %c  |   %c  |   %c  \n",box[7],box[8],box[9]);
        printf("\t\t\t            |      |       \n");
}

