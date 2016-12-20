#include <stdio.h>

int main()
{
    int score;
    
    while (scanf("%d", &score) == 1) {
        if (score >= 0 && score <= 100) {
            switch (score/10) {
            case 10 : case 9 :
                printf("A\n");
                break;
            case 8 :
                printf("B\n");
                break;
            case 7 :
                printf("C\n");
                break;
            case 6 :
                printf("D\n");
                break;
            case 5 : case 4 : case 3 : case 2 : case 1 : case 0 :
                printf("E\n");
                break;
            default :
                printf("Score is error!\n");
            }
        } else {
            printf("Score is error!\n");
        }
    }

    return 0;
}

