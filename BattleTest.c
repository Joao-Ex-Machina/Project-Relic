#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int hp, dmg, enemyhp, enemydmg, spe, enemyspe, action, exp, G, lvlup, lvl, option;

    spe = 5;
    enemyspe = 3;
    enemyhp = 60;
    dmg = 20;
    hp = 100;
    enemydmg = 25;
    lvl = 1;
     time_t t;
srand((unsigned) time(&t));

    printf ("\nYou find a WERRAT along your way!\n");
    while (hp>0 && enemyhp>0)
    {
         if (spe>enemyspe)
         {
          printf ("\nWhat do you wish to do?");
            printf ("\n 1-Attack");
            printf ("\n 2-Defend\n");
            scanf("%d", &action);
                if (action == 1)
                {
                        printf("\n YOU ATTACK!");
                        enemyhp = enemyhp - (dmg + (rand()%20) - 10);
                        delay(500);
                        if (enemyhp>=0)
                        {
                         printf("\n The Werrat is now at %d health points", enemyhp);
                        delay(1000);
                        }
                        else
                          {
                            break;
                          }
                          printf("\n THE WERRAT ATTACKS");
                            hp = hp - (enemydmg + rand()%20 - 10);
                            printf("\n You are now at %d health points", hp);
                }
                else if (action == 2) // é suposto fazer alguma coisa
                    {
                      printf("\n YOU DEFEND!");
                        delay(500);
                        printf("\n THE WERRAT ATTACKS");
                            hp = hp - (enemydmg/2 + rand()%20 - 10);
                            printf("\n You are now at %d health points", hp);
                    }
         }
    }
    if (enemyhp<=0)
    {
      exp = 30;
    G = 15;
    delay(500);
    clrscr();
    printf("\nThe Werrat has fallen! \nYou did a nice clean job killing that rat.\nYou gain %d exp and %d GOLD!", exp, G);
    lvlup = 25;
    delay(500);
    if (lvlup <= exp)
    {
     lvl = lvl + 1;
     printf("\nYou leveled up! You are now at level %d!\n", lvl);
    }
    }
    else{
    printf("\nYou have fallen! Game Over!\n");}

    return 0;
}
void delay(int seconds)
{

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + seconds);
}
void clrscr()
{
    system("@cls||clear");
}
