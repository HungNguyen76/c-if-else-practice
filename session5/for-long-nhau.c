#include <stdio.h>


int  main() {
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    //vong lap thu 1
    //i = 0, kiem tra dieu kien for1: i <= 5(true)
    //j = 0, kiem tra dieu kien for2: j <= i (0) (true)
    //in ra man hinh 0, va xuong dong
    //vong lap thu 2
    //i = 1, kiem tra dieu kien for1 (true)
    //j = 0, kiem tra dieu kien for2: j <= 1 (true)
    //in ra man hinh 0 1, va xuong dong
    //va tiep tuc cho den khi dieu kien vong lap for1 tra ve false
}