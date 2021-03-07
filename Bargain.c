/*-------------------------------------------------------------------------------------------------+
| BargainBase| Basic Bargain mechanics for PROJECT RELIC + testting                                |
|            |                                                                                     |
+--------------------------------------------------------------------------------------------------+
| Authors: João Barreiros C. Rodrigues (Joao-Ex-Machina)                                           |                                            |
| Date:    05 March 2021 (created) / 06 March 2021 (tested)                                                                 |
+-------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int spricefixed, spricefinal, bpricefixed, bpricefinal, lvl, charisma  ;
float bargain;

int main() {
    srand ( time(NULL) );
    lvl = rand()%10 + 1; //generate random status for testing
    charisma = rand()%10 + 1;
    spricefixed = rand()%1000 + 1;
    printf("testlevel:%d", lvl);
    printf("testcharisma:%d", charisma);
    printf("testprice:%d", spricefixed);
    bargainfunc();
    spricefinal = (int) (spricefixed * bargain);
    printf("sell price:%d", spricefinal);
    bpricefinal = (int) (spricefixed / bargain);
    printf("buy price:%d", bpricefinal);
}


void bargainfunc (){
    srand ( time(NULL) ); //Time-based seeding of rand() function
    bargain = 0;
    bargain = (float) (charisma + lvl + (rand()%50))/100;
}