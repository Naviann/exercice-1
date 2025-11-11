#include <stdio.h>

int main() {
  char name[10];
  char selection;
  char go;
  char flee;
  int lv;
  

  printf("What's thy nameth, oh dragonslayer?: ");
  scanf("%s", name);

  printf("How many winters doth thee has't?: ");
  scanf("%d", &lv);

  printf("%s. ", name);

  if(lv >= 18) {
    printf("Thee can venture into the forest\n");
  }
  else {
    printf("The village elders preventeth thee from leaving. Thou art too young\n");
  }

  do {
    printf("You venture into de forest, suddenly, you hear a scream. What do you do?\n");  
    printf("Flee\n");
    printf("Go\n");
    scanf(" %c", &selection);
  
   if(selection == flee) {
    printf("You're too scared to push any further to the forest... With shame, you return to the village %s.", name);
    printf("Fin del juego");
  }
  else {
     printf("You really want to go?\n");
    }

   } while (selection = go);
    printf("You have guts. You know well that sound, your prey is near. You continue forward to the deppest\n"); 
    
    return 0;
}