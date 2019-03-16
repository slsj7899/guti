#include <iostream>
#include <stdio.h>
#include <string.h>
int i;
int saylove(int times){
    if(i<=2) return 0;
    for (int i = 0; i <times ; ++i) {
        printf("love\n");
        saylove(i);
    }
    return times;
}

int main() {
    int i=0;
    for (int j = 0; j < 100; ++j) {
        i+=j;
    }

    return i;
}