#include <stdio.h>
#include <stdlib.h>

int class, religion, hp, dmg, lvl, action, action2, loot, sword1, tome1;
int rathp, goblinhp, orchp, demonhp, colossushp;
int main(){
    printf ("\n Choose your class");
    printf ("\n Insert 1 for Warrior");
    printf ("\n Insert 2 for Wizard");
    scanf ("%d", &class);
    if(class==1 || class ==2){
       printf ("\n Class confirmed, proceding..."); 
    }
    else {
        printf ("\n ERROR!");
        printf ("\n EXITING!");
        exit (0);
    }
    printf ("\n Choose your religion");
    printf ("\n Insert 1 for God-Worshiper");
    printf ("\n Insert 2 for Demon-Worshiper");
    printf ("\n Insert 3 for Non-believer");
    scanf ("%d", &religion);
   if(religion==1 || religion==2 || religion==3 ){
       printf ("\n Religion confirmed, proceding..."); 
    }
    else {
        printf ("\n ERROR!");
        printf ("\n EXITING!");
        exit (0);
    }
    if (class == 1){
        hp = 100;
        dmg = 20;
    }

    if (class == 2){
        hp = 80;
        dmg = 10;
    }
    while (hp > 0){
        printf ("\n You are a brave hero who has come in a quest to find a great relic");
        printf ("\n You find a WERRAT along your way");
        rathp = 60;
        goblinhp = 100;
        orchp = 200;
        demonhp = 666;
        colossushp = 1000;

        while (rathp > 0){
            printf ("\n What do you wish to do?");
            printf ("\n 1-Attack");
            printf ("\n 2-Defend");
            scanf("%d", &action);
            if (action==1){ 
                if (class == 2){
                    printf ("\n Choose the Spell to use");
                    printf ("\n 1-Magic Missile");
                    scanf("%d", &action2);
                    while (action2 != 1) {
                        printf ("\n Choose a valid spell! ");
                        printf ("\n 1-Magic Missile");
                        scanf("%d", &action2);
                    }
                    if (action2 == 1){
                        rathp = rathp - (dmg + rand()%30);
                        }
                }
                else{
                    printf("\n YOU ATTACK!");
                rathp = rathp - (dmg + rand()%20);
                }
            }
             if (action==2){
                printf("\n YOU DEFEND!");
                hp = hp + rand()%5;
                printf("\n You are now at %d health points", hp);
            }
            printf("\n THE WERRAT ATTACKS");
            hp = hp - rand()%5;
            printf("\n You are now at %d health points", hp);
        }
        printf("\n You deal a killing blow!");
        if (rathp <=0 && rathp >=-30) {
           printf("\n You did a nice clean job killing that rat");
        }
        if (rathp < -30){
            printf("\n THE ONCE-RAT IS NOW A GORE FEST FOR THE VERMS TO FEAST ON!");
        }
        loot = rand()%101;
        if (loot  >= 75 && loot <= 90 ) {
            printf("\n You find a nice chainmal on the stomach of the rat...A tragedy for some, but a bless for you");
            hp = hp + 30;
        }

        if (loot  >= 91) {
            if (class == 1) {
                printf("\n From the remnants of the rat you pull THE SWORD OF MINOR VAMPIRISM");
                sword1 = 1;
        }
         if (class == 2) {
              printf("\n From the remnants of the rat you pull THE TOME OF PESTILENCE");
              tome1 = 1;

        }
    

    }
  return 0;
}
}
