#include <stdio.h>

#define MALLOC(p, s) \
    if (!((p) = malloc(s))) {\
        fprintf(stderr, "Insufficent memory");\
        exit(EXIT_FAILURE);\
    }
#define MAX_STACKS 100
#define numRow 5
#define numCol 5

//struct
typedef struct {
    short int row;
    short int col;
    short int dir;
}element;

typedef struct stack* stackPointer;

typedef struct{
    element data;
    stackPointer next;
} stack;
stackPointer top[numRow];

//declare functions
void setup_maze();
void push(int i, element item);
element pop(int i);

//main
int main() {

    return 0;
}

//define functions
void setup_maze() {
    short int maze0[numRow][numCol] = { //여기서 줄 바꾸어 주세요(1).
        { 0,1,1,1,1 },
        { 1,0,1,0,1 },
        { 1,0,0,1,0 },
        { 0,0,1,0,1 },
        { 1,0,0,1,0 } //여기서 줄 바꾸어 주세요(2).
    };
    //2차원 배열 maze0[numRow][numCol]로부터
    //전역변수인 2차원 배열 maze[numRow+2][numCol+2]를 설정 완료하는 코드
}
