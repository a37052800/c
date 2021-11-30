#include <stdbool.h>
#include <stdio.h>
int main()
{
    int mySuit[20] = {0, 2, 1, 2, 2, 0, 1, 1, 3, 3, 2, 0, 1, 2, 3, 2, 0, 1, 3, 0};
    int myRank[20] = {3, 1, 10, 1, 5, 4, 6, 2, 12, 0, 11, 1, 5, 7, 0, 12, 2, 8, 5, 10};
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};
    //bool in_hand[20][20] = {false};
    int num_cards, rank, suit;
    scanf("%d%d%d", &num_cards, &suit, &rank);
    printf("%c%c", rank_code[myRank[rank]], suit_code[mySuit[suit]]);
    //in_hand[mySuit[suit]][myRank[rank]] = true;
    for (int i = 1; i < num_cards; i++)
    {
        printf(" %c%c", rank_code[myRank[i + rank]], suit_code[mySuit[i + suit]]);
        /*if (!in_hand[mySuit[i + suit]][myRank[i + rank]])
        {
            in_hand[mySuit[i + suit]][myRank[i + rank]] = true;
            printf(" %c%c", rank_code[myRank[i + rank]], suit_code[mySuit[i + suit]]);
        }
        else
            num_cards++;*/
    }
    return 0;
}