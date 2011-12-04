#include "Lib/pokerLib.h"
void randOpp();
int generateHoldCards();
int generateRandomNumbers();
int main(int argc, char* argv[])
{
int iplayers;
puts("hello this is a poker training program");
printf("How many players do you want in the game ? [2-9] :");
scanf("%d", &iplayers); 
if ( iplayers <= 9 && iplayers >= 2)
{
puts("You have selected an appropriate amount of opponents");
}
else {
return 1; 
}
printf("You have chosen to play with %d computer played opponents\n", (iplayers-1));
randOpp();
}

void randOpp()
{
int c1, c2;
c1 = generateHoldCards();
c2 = generateHoldCards();
}


int generateHoldCards()
{
int card;


card = Randomizer(); //Here I should implement the check whether the cards are dealt !,
//if they are dealt I should call Randomizer again!
printf("%d\n", (abs((card%52+1))));
/*
 * All the cards since this will only play hold 'em I only need to give 2 cards!
 * Okay this might be quite ineffecient since I will still need to check whether that 
 * particular card have been selected once already.
 * | Spades | Hearts | Clubs  | Diamond
 * | 2 = 1  |  2 =14 |  2 =27 |  2 =40
 * | 3 = 2  |  3 =15 |  3 =28 |  3 =41
 * | 4 = 3  |  4 =16 |  4 =29 |  4 =42
 * | 5 = 4  |  5 =17 |  5 =30 |  5 =43
 * | 6 = 5  |  6 =18 |  6 =31 |  6 =44
 * | 7 = 6  |  7 =19 |  7 =32 |  7 =45
 * | 8 = 7  |  8 =20 |  8 =33 |  8 =46
 * | 9 = 8  |  9 =21 |  9 =34 |  9 =47
 * | 10= 9  |  10=22 |  10=35 |  10=48
 * | J =10  |  J =23 |  J =36 |  J =49
 * | Q =11  |  Q =24 |  Q =37 |  Q =50
 * | K =12  |  K =25 |  K =38 |  K =51
 * | A =13  |  A =26 |  A =39 |  A =52
 * |___________________________________
 */
return 0;
}

void showcards(int card1, int card2)
{
int i;
for (i=0; i < 2; i++)
{
if (card1 = 1)
{
        printf("Card 1 = 2 of Heart's\n");
}
else if (card1 = 2)
        {
        printf("Card 1 = 3 of Heart's\n");
}
if (card2 = 1)
{
        printf("Card 2 = 2 of hearts");
}
}
}
/* ********************************** */



/* ********************************** */
void availableCards()
{
int* undealt;
undealt = (int*)calloc(53, 4);
int i;
for(i=0; i < 52; i++)
{
        undealt[i] = i;
}
}



