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
generateHoldCards();

generateHoldCards();
generateHoldCards();
generateHoldCards();
generateHoldCards();
generateHoldCards();
}


int generateHoldCards()
{
int card;


card = generateRandomNumbers();
printf("%d\n", card);
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


int generateRandomNumbers()
{
int randInt = abs((random()*time(NULL)%51+1));
/*
* The idea is to make a system where some numbers will fall through some tests, and make them so
* that fewer numbers fall through the further we get.
* The basis could be something along a maze pulled by gravity
*/
return randInt;
}
