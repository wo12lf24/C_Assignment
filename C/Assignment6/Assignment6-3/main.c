/*
Assignment6-3
학번:2019202003
이름:김주형
*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define AI 17
#define SPADE "♠"
#define CLUB "♣"
#define DIA "◆"
#define HEART "♥"

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

// 카드 구조체
struct Card
{
    int number;
    char shape;
};

// 모든 카드
struct Card card_all[52];
int next;

// 선수
struct Player
{
    int cash;
    int score;
    struct Card card_player[21];
};

struct Player player[3];

// 카드 섞는 함수
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

// 카드 채우는 함수
void filldeck()
{
    int i = 0;
    // 4개의 모양과 13개의 숫자를 짝지어서 카드 만듦
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

// 사용자가 뽑은 카드를 문자열이 아닌 카드 모양으로 출력, 점수 계산
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

    // ace 계산 묻기
    if (ace_score == -1)
    {
        printf("ACE가 나왔네요, [1/11]점으로 계산합니다: ");
        scanf("%d", &ace_score);
        player[p].score += ace_score;
    }

    printf("score : %d\n", player[p].score);

    return;
}

// 베팅하는 함수
int betting(struct Player player)
{
    int bet;

    printf("돈을 걸어봅시다! %d 중 얼마를 배팅하시겠습니까? ", player.cash);
    scanf("%d", &bet);

    if (bet > player.cash)
    {
        printf("이런이런... 돈이 부족하군요. 조금만 아껴야겠어요. 다시 입력 : ");
        scanf("%d", &bet);
        return bet;
    }
    else
    {
        return bet;
    }
}

// 게임을 시작
void stayorhit(int p, int turns)
{
    char answer;

    printf("\n##########TURN : PLAYER%d님##########\n\n", p);
    while (player[p].score < 21)
    {
        printf("HIT을 원하시면 h를, STAY를 원하시면 s를 입력하세요[h/s]: ");
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
            printf("HIT이면 h, STAY면 s라니까요.\n다시,");
        }
    }

    if (player[p].score > 21)
    {
        printf("21점을 넘었습니다. LOSS\n");
        player[p].score = 0;
    }
    else if (player[p].score == 21)
    {
        printf("21점입니다. WIN\n");
    }
}

//딜러는 지능적으로 16까지만 안전하게 여기고 hit
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

// 게임 진행
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

        // 두명 다 확인
        if (player[1].cash <= 0)
        {
            printf("!!! PLAYER1 파산하셨습니다. 100 다시 충전\n\n");
            player[1].cash += 100;
        }
        else if (player[2].cash <= 0)
        {
            printf("!!! PLAYER2 파산하셨습니다.\n\n");
            player[2].cash += 100;
        }
        else if (player[1].cash <= 0 && player[2].cash <= 0)
        {
            printf("!!! PLAYER1 파산하셨습니다.\n\n");
            printf("!!! PLAYER2 파산하셨습니다.\n\n");
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
        printf("\nPLAYER1님, ");
        bet[1] = betting(player[1]);
        bet_total += bet[1];
        printf("\nPLAYER2님, ");
        bet[2] = betting(player[2]);
        bet_total += bet[2];

        stayorhit(1, turns);
        stayorhit(2, turns);

        dealer(turns);

        printf("\n게임 결과>> DEALER %d / PLAYER1: %d / PLAYER2: %d\n", player[0].score, player[1].score, player[2].score);

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
        printf("\n결과>> P1 CASH : %d / P2 CASH : %d\n", player[1].cash, player[2].cash);

        char answer;
        printf("계속하시겠습니까? ");
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

    printf("게임이 종료됩니다.");
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
    printf("블랙잭 게임에 오신 것을 환영합니다! 지금 바로 시작하시겠습니까? [y/n] ");
    scanf("%c", &choice);

    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
    {
        printf("이상한 문자를 입력하셨습니다. 다시 입력해주세요! [y/n] ");
        scanf("%c", &choice);
    }

    if (choice == 'Y' || choice == 'y')
    {
        reset();
        play();
    }
    else if (choice == 'N' || choice == 'n')
    {
        printf("게임을 종료합니다.\n");
        return;
    }
}

int main(void)
{
    start();

    return 0;
}