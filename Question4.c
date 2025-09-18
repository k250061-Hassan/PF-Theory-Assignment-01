#include <stdio.h>

int main() {
    int card1, card2, card3, card4, card5;

    printf("Enter 5 numbers for card rank from (1-13): \n");
    if (scanf("%d %d %d %d %d", &card1, &card2, &card3, &card4, &card5) != 5) {
        printf("Please enter 5 numbers.\n");
        return 0;
    }

    if (card1 < 1 || card1 > 13 || 
        card2 < 1 || card2 > 13 ||
        card3 < 1 || card3 > 13 ||
        card4 < 1 || card4 > 13 ||
        card5 < 1 || card5 > 13) {
        printf("Invalid card rank. Enter number between 1-13.\n");
        return 0;
    }

    if ((card1 == card2 && card2 == card3 && card4 == card5 && card1 != card4) ||        
		(card1 == card2 && card2 == card4 && card3 == card5 && card1 != card3) ||
        (card1 == card2 && card2 == card5 && card3 == card4 && card1 != card3) ||
        (card1 == card3 && card3 == card4 && card2 == card5 && card1 != card2) ||
        (card1 == card3 && card3 == card5 && card2 == card4 && card1 != card2) ||
        (card1 == card4 && card4 == card5 && card2 == card3 && card1 != card2) ||
        (card2 == card3 && card3 == card4 && card1 == card5 && card2 != card1) ||
        (card2 == card3 && card3 == card5 && card1 == card4 && card2 != card1) ||
        (card2 == card4 && card4 == card5 && card1 == card3 && card2 != card1) ||
        (card3 == card4 && card4 == card5 && card1 == card2 && card3 != card1)) {
        printf("The poker's hand is a full house!\n");
    } else {
        printf("The poker's hand is not a full hand.\n");
    }

    return 0;
}


