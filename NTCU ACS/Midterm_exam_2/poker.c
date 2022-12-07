#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_straight_flush();
bool is_four_of_a_kind();
bool is_full_house();
bool is_flush();
bool is_straight();
bool is_three_of_a_kind();
int  count_pair();
void print_result();

char rank[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
char suit[] = {'c', 'd', 'h', 's'};
bool poker[13][4];

int main()
{
    memset(poker, 0, sizeof(poker));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a card: ");
        char rank_t, suit_t;
        int rank_index, suit_index;
        fflush(stdin);
        scanf("%c%c", &rank_t, &suit_t);
        bool rank_exist = false;
        for (int j = 0; j < 13; j++)
        {
            if (rank[j] == tolower(rank_t))
            {
                rank_index = j;
                rank_exist = true;
                break;
            }
        }
        bool suit_exist = false;
        for (int j = 0; j < 4; j++)
        {
            if (suit[j] == tolower(suit_t))
            {
                suit_index = j;
                suit_exist = true;
                break;
            }
        }
        if ((!rank_exist || !suit_exist))
        {
            printf("Bad card; ignored.\n");
            i--;
            continue;
        }
        if (poker[rank_index][suit_index])
        {
            printf("Duplicate card; ignored.\n");
            i--;
            continue;
        }
        poker[rank_index][suit_index] = true;
    }
    print_result();
}

bool is_straight_flush()
{
    return is_flush() && is_straight();
}
bool is_four_of_a_kind()
{
    for (int i = 0; i < 13; i++)
    {
        if (poker[i][0] && poker[i][1] && poker[i][2] && poker[i][3])
            return true;
    }
    return false;
}
bool is_full_house()
{
    return is_three_of_a_kind() && (count_pair() > 1);
}
bool is_flush()
{
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 13; j++)
        {
            if (poker[j][i])
                sum++;
        }
        if (sum >= 5)
            return true;
    }
    return false;
}
bool is_straight()
{
    for (int i = 0; i < 13; i++)
    {
        if ((poker[i][0] || poker[i][1] || poker[i][2] || poker[i][3]) &&
            (poker[(i + 1) % 13][0] || poker[(i + 1) % 13][1] || poker[(i + 1) % 13][2] || poker[(i + 1) % 13][3]) &&
            (poker[(i + 2) % 13][0] || poker[(i + 2) % 13][1] || poker[(i + 2) % 13][2] || poker[(i + 2) % 13][3]) &&
            (poker[(i + 3) % 13][0] || poker[(i + 3) % 13][1] || poker[(i + 3) % 13][2] || poker[(i + 3) % 13][3]) &&
            (poker[(i + 4) % 13][0] || poker[(i + 4) % 13][1] || poker[(i + 4) % 13][2] || poker[(i + 4) % 13][3]))
            return true;
    }
    return false;
}
bool is_three_of_a_kind()
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            if (poker[j][i] && poker[j][(i + 1) % 4] && poker[j][(i + 2) % 4])
                return true;
    return false;
}
int count_pair()
{
    int sum = 0;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < 4; k++)
            {
                if (poker[i][j] && poker[i][k])
                {
                    sum++;
                }
            }
        }
    }
    return sum;
}
void print_result()
{
    int pair = count_pair();
    if (is_straight_flush())
        printf("Straight flush");
    else if (is_four_of_a_kind())
        printf("Four of a kind");
    else if (is_full_house())
        printf("Full house");
    else if (is_flush())
        printf("Flush");
    else if (is_straight())
        printf("Straight");
    else if (is_three_of_a_kind())
        printf("Three of a kind");
    else if (pair == 2)
        printf("Two pairs");
    else if (pair == 1)
        printf("Pair");
    else
        printf("High card");
}
