/* 674 - Coin Change */
#include <stdio.h>

int main () {
  int amount,changes;
  int coins_50,coins_25,coins_10,coins_05;
  while(scanf("%d",&amount) != EOF) {
    changes = 0;
    coins_50 = amount / 50;
    amount = amount % 50;
    do {
      coins_25 = amount / 25;
      amount = amount % 25;
      do {
	coins_10 = amount / 10;
	coins_05 = (amount % 10) / 5;
	changes += (coins_10+1)*(coins_10+1+coins_05);
	if (coins_25 > 0) amount += 25;
      } while (coins_25-- > 0);
      if (coins_50 > 0) amount += 50;
    } while (coins_50-- > 0);
    printf("%d\n",changes);
  }
  return 0;
}
