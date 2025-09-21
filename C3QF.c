// Write a program for a matchstick game being played between
// the computer and a user. Your program should ensure that the
// computer always wins. Rules for the game are as follows:
// − There are 21 matchsticks.
// − The computer asks the player to pick 1, 2, 3, or 4
// matchsticks.
// − After the person picks, the computer does its
// picking.
// − Whoever is forced to pick up the last matchstick
// loses the game.



#include <stdio.h>
void main(){
    int remaining = 21;
    int playerpick;
    int botpick;

    printf("Welcome to the game : Player 1's turn");
    while (remaining>0)
    {
    printf("\nPick 1,2,3 or 4 matchstick: ");
    scanf("%d",&playerpick);
    remaining -= playerpick;
    printf("\nThere are %d matchsticks remaining." , remaining );
    if (remaining==0){
        break;
    }
    botpick = 5-playerpick;
    printf("\n The bot picked %d matchsticks" , botpick);
    remaining-= botpick;
    printf("\n There are %d matchsticks remaining.",remaining);
        
    }
    printf("\nYou picked the last matchstick.. you lose!");
    
    
}