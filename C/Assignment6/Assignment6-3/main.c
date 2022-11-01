/*
Assignment6-3
�й�:2019202003
�̸�:������
*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define AI 17
#define SPADE "��"
#define CLUB "��"
#define DIA "��"
#define HEART "��"

// enum
enum shape
{
    spade,
    club,
    dia,
    heart
};
enum num
{
    ace = 1,
    jack = 11,
    queen = 12,
    king = 13
};

// ī�� ����ü
struct Card
{
    int number;
    char shape;
};

// ��� ī��
struct Card card_all[52];
int next;

// ����
struct Player
{
    int cash;
    int score;
    struct Card card_player[21];
};

struct Player player[3];

// ī�� ���� �Լ�
void shuffle()
{
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        int index = rand() % 52;
        struct Card temp = card_all[index];
        card_all[index] = card_all[i];
        card_all[i] = temp;
    }
}

// ī�� ä��� �Լ�
void filldeck()
{
    int i = 0;
    // 4���� ���� 13���� ���ڸ� ¦��� ī�� ����
    for (int j = 0; j < 4; j++)
    {
        for (int k = 1; k < 14; k++)
        {
            card_all[i].number = k;
            card_all[i].shape = j;
            i++;
        }
    }
}

struct Card deal(int next)
{
    return card_all[next];
}

// ����ڰ� ���� ī�带 ���ڿ��� �ƴ� ī�� ������� ���, ���� ���
void printcard(int p, int turns)
{
    int ace_score = 0;

    printf("-------\n");

    switch (player[p].card_player[turns].shape)
    {
    case spade:
        printf("|%s     |\n", SPADE);
        break;
    case club:
        printf("|%s     |\n", CLUB);
        break;
    case dia:
        printf("|%s     |\n", DIA);
        break;
    case heart:
        printf("|%s     |\n", HEART);
        break;
    }

    switch (player[p].card_player[turns].number)
    {
    case ace:
        printf("|  A  |\n");
        ace_score = -1;
        break;
    case jack:
        printf("|  J  |\n");
        player[p].score += 10;
        break;
    case queen:
        printf("|  Q  |\n");
        player[p].score += 10;
        break;
    case king:
        printf("|  K  |\n");
        player[p].score += 10;
        break;
    default:
        printf("|  %2d  |\n", player[p].card_player[turns].number);
        player[p].score += player[p].card_player[turns].number;
        break;
    }
    switch (player[p].card_player[turns].shape)
    {
    case spade:
        printf("|     %s|\n", SPADE);
        break;
    case club:
        printf("|     %s|\n", CLUB);
        break;
    case dia:
        printf("|     %s|\n", DIA);
        break;
    case heart:
        printf("|     %s|\n", HEART);
        break;
    }

    printf("-------\n");

    // ace ��� ����
    if (ace_score == -1)
    {
        printf("ACE�� ���Գ׿�, [1/11]������ ����մϴ�: ");
        scanf("%d", &ace_score);
        player[p].score += ace_score;
    }

    printf("score : %d\n", player[p].score);

    return;
}

// �����ϴ� �Լ�
int betting(struct Player player)
{
    int bet;

    printf("���� �ɾ�ô�! %d �� �󸶸� �����Ͻðڽ��ϱ�? ", player.cash);
    scanf("%d", &bet);

    if (bet > player.cash)
    {
        printf("�̷��̷�... ���� �����ϱ���. ���ݸ� �Ʋ��߰ھ��. �ٽ� �Է� : ");
        scanf("%d", &bet);
        return bet;
    }
    else
    {
        return bet;
    }
}

// ������ ����
void stayorhit(int p, int turns)
{
    char answer;

    printf("\n##########TURN : PLAYER%d��##########\n\n", p);
    while (player[p].score < 21)
    {
        printf("HIT�� ���Ͻø� h��, STAY�� ���Ͻø� s�� �Է��ϼ���[h/s]: ");
        scanf(" %c", &answer);

        if (answer == 'h' || answer == 'H')
        {
            turns++;
            player[p].card_player[turns] = deal(next++);
            printcard(p, turns);
        }
        else if (answer == 's' || answer == 'S')
        {
            break;
        }
        else
        {
            printf("HIT�̸� h, STAY�� s��ϱ��.\n�ٽ�,");
        }
    }

    if (player[p].score > 21)
    {
        printf("21���� �Ѿ����ϴ�. LOSS\n");
        player[p].score = 0;
    }
    else if (player[p].score == 21)
    {
        printf("21���Դϴ�. WIN\n");
    }
}

//������ ���������� 16������ �����ϰ� ����� hit
void dealer(int turns)
{
    printf("\n##########DEALER's TURN##########\n\n");
    while (player[0].score < 21)
    {
        if (player[0].score < AI)
        {
            turns++;
            player[0].card_player[turns] = deal(next++);
            printcard(0, turns);
        }
        else
        {
            break;
        }
    }
    if (player[0].score > 21)
    {
        player[0].score = 0;
    }
}

// ���� ����
void play()
{
    int turns = 0;
    int goon = 1;
    int push = 0;
    int push_flag = 0;
    int bet_total = 0;

    while (goon)
    {
        int winner, winnerscore = -1;
        int bet[3];
        bet[0] = 10;
        push_flag = 0;

        if (push == 0)
        {
            bet_total = 0;
        }

        // �θ� �� Ȯ��
        if (player[1].cash <= 0)
        {
            printf("!!! PLAYER1 �Ļ��ϼ̽��ϴ�. 100 �ٽ� ����\n\n");
            player[1].cash += 100;
        }
        else if (player[2].cash <= 0)
        {
            printf("!!! PLAYER2 �Ļ��ϼ̽��ϴ�.\n\n");
            player[2].cash += 100;
        }
        else if (player[1].cash <= 0 && player[2].cash <= 0)
        {
            printf("!!! PLAYER1 �Ļ��ϼ̽��ϴ�.\n\n");
            printf("!!! PLAYER2 �Ļ��ϼ̽��ϴ�.\n\n");
            break;
        }

        player[0].score = 0;
        player[1].score = 0;
        player[2].score = 0;

        player[0].card_player[turns] = deal(next++);
        printcard(0, turns);

        printf("\n<<PLAYER1>>\n");
        printf("CASH : %d\n", player[1].cash);
        player[1].card_player[turns] = deal(next++);
        printcard(1, turns);

        printf("\n<<PLAYER2>>\n");
        printf("CASH : %d\n", player[2].cash);
        player[2].card_player[turns] = deal(next++);
        printcard(2, turns);

        bet_total += bet[0];
        printf("\nPLAYER1��, ");
        bet[1] = betting(player[1]);
        bet_total += bet[1];
        printf("\nPLAYER2��, ");
        bet[2] = betting(player[2]);
        bet_total += bet[2];

        stayorhit(1, turns);
        stayorhit(2, turns);

        dealer(turns);

        printf("\n���� ���>> DEALER %d / PLAYER1: %d / PLAYER2: %d\n", player[0].score, player[1].score, player[2].score);

        for (int i = 0; i < 3; i++)
        {
            if (winnerscore < player[i].score)
            {
                winner = i;
                winnerscore = player[i].score;
            }
        }
        printf("prize: ");

        for (int i = 0; i < 3; i++)
        {
            if (winnerscore == player[i].score && winner != i)
            {
                if (push == 0)
                {
                    push = 1;
                }
                push_flag = 1;
            }
        }

        push *= push_flag;

        if (push == 1)
        {
            player[1].cash -= bet[1];
            player[2].cash -= bet[2];
            printf("0\n");
        }
        else if (winner == 0)
        {
            player[1].cash -= bet[1];
            player[2].cash -= bet[2];
            push = 0;
            printf("%d\n", bet_total);
        }
        else if (winner == 1)
        {
            player[1].cash += bet_total;
            player[2].cash -= bet[2];
            push = 0;
            printf("%d\n", bet_total);
        }
        else if (winner == 2)
        {
            player[1].cash -= bet[1];
            player[2].cash += bet_total;
            push = 0;
            printf("%d\n", bet_total);
        }
        printf("\n���>> P1 CASH : %d / P2 CASH : %d\n", player[1].cash, player[2].cash);

        char answer;
        printf("����Ͻðڽ��ϱ�? ");
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    printf("������ ����˴ϴ�.");
}

void reset()
{
    player[0].score = 0;
    player[1].score = 0;
    player[2].score = 0;
    player[1].cash = 500;
    player[2].cash = 500;

    filldeck();
    shuffle();
    next = 0;
}

void start()
{
    char choice;
    printf("���� ���ӿ� ���� ���� ȯ���մϴ�! ���� �ٷ� �����Ͻðڽ��ϱ�? [y/n] ");
    scanf("%c", &choice);

    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
    {
        printf("�̻��� ���ڸ� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���! [y/n] ");
        scanf("%c", &choice);
    }

    if (choice == 'Y' || choice == 'y')
    {
        reset();
        play();
    }
    else if (choice == 'N' || choice == 'n')
    {
        printf("������ �����մϴ�.\n");
        return;
    }
}

int main(void)
{
    start();

    return 0;
}