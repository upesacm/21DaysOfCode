#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N        (3)        // matrix dimension
#define N_STATES (362880) // 9!/2
#define N_SOL    ((987654321))

char prime[] = {
    0, /* 0 */
    1, /* 1 */
    1, /* 2 */
    1, /* 3 */
    0, /* 4 */
    1, /* 5 */
    0, /* 6 */
    1, /* 7 */
    0, /* 8 */
    0, /* 9 */
    0, /* 10 */
    1, /* 11 */
    0, /* 12 */
    1, /* 13 */
    0, /* 14 */
    0, /* 15 */
    0, /* 16 */
    1, /* 17 */
    0, /* 18 */
    1  /* 19 */
};

int tenpow[] = {
    100000000,  /* 0 (10^8) */
    10000000,   /* 1 (10^7) */
    1000000,    /* 2 (10^6) */
    100000,     /* 3 (10^5) */
    10000,      /* 4 (10^4) */
    1000,       /* 5 (10^3) */
    100,        /* 6 (10^2) */
    10,         /* 7 (10^1) */
    1           /* 8 (10^0) */
};

int  board[N*N];
char visited[N_SOL];
int  queue[N_STATES];
int  head, tail;
int  current_index;

void moveit(int i, int j)
{
    int diff = board[j]-board[i];
    int next_index = current_index + diff*tenpow[i] - diff*tenpow[j];
    if ( visited[(next_index)] == 0 ) {
        visited[(next_index)] = visited[(current_index)]+1;
        queue[tail++] = next_index;
    }

}

void scramble_states() {

    int i;
    int state_index;

    head = 0;
    while ( head < tail ) {
        // fill board
        current_index = state_index = queue[head];
        for ( i=8; i >= 0; state_index /= 10, i-- )
            board[i] = state_index%10;

        if ( prime[board[0]+board[1]] ) moveit(0, 1);
        if ( prime[board[0]+board[3]] ) moveit(0, 3);
        if ( prime[board[1]+board[2]] ) moveit(1, 2);
        if ( prime[board[1]+board[4]] ) moveit(1, 4);
        if ( prime[board[2]+board[5]] ) moveit(2, 5);
        if ( prime[board[3]+board[4]] ) moveit(3, 4);
        if ( prime[board[3]+board[6]] ) moveit(3, 6);
        if ( prime[board[4]+board[5]] ) moveit(4, 5);
        if ( prime[board[4]+board[7]] ) moveit(4, 7);
        if ( prime[board[5]+board[8]] ) moveit(5, 8);
        if ( prime[board[6]+board[7]] ) moveit(6, 7);
        if ( prime[board[7]+board[8]] ) moveit(7, 8);

        head++;
    }
}

int main()
{
    int test_cases;
    int state_index;
    int tmp;

    tail = 0;
    queue[tail++] = 123456789;
    visited[123456789] = 1;
	scramble_states();

    fscanf(stdin, "%d", &test_cases);
    for ( int i = 0; i < test_cases; i++ ) {
        state_index = 0;
        for ( int j = 0; j < N*N; j++ ) {
            fscanf(stdin, "%d", &tmp);
            state_index = (state_index << 3) + (state_index << 1) + tmp;
        }
        printf("%d\n", visited[state_index] - 1);
    }
    return 0;
}

