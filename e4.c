#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i=0,cnth=0,cntt=0;
  char str[10];
  printf("Who are you?\n");
  scanf("%s",str);
  printf("Hello, %s!\n",str);
  printf("tossing a coin...\n");
  srand(time(NULL));
  for(i=1;i<4;i++){
    printf("Round %d:",i);
    if(rand()%2==0){
      printf("Heads\n");
      cnth++;
    }
    else{
    printf("Tails\n");
    cntt++;
    }
  }
  printf("Heads: %d,Tails: %d\n",cnth,cntt);
  if(cnth>cntt)
    printf("you won!\n");
    else
      printf("you lose\n");
  return 0;
}
