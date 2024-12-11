#include <stdio.h>
#include <string.h> 

int main() {
    // khai bao va gan gia tri cho chuoi
    char kitu[100] = "Xin chao cac ban";
    int size = strlen(kitu);  
    // in tung ki tu cua chuoi moi ki tu cach nhau 1 dau cach
    for (int i = 0; i < size; i++) {
        printf("%c ", kitu[i]); 
    }
    printf("\n");
    return 0;
}

