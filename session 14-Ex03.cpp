#include <stdio.h>
#include <string.h> 

int main() {
    // khai bao va gan gia tri cho chuoi
    char chuoi[100] = "Xin chao cac ban";
    int size = strlen(chuoi);  
    // In chuoi dao nguoc
    printf("Chuoi dao nguoc: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    return 0;
}

