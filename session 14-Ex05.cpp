#include <stdio.h>
#include <string.h>

int main() {
    // khai bao va gan gia tri cho chuoi
    char chuoi[100] = "hello world";
    // dem so tu 
    int sotu = 0;
    int size = strlen(chuoi);   
    for (int i = 0; i < size; i++) {
        if (chuoi[i] != ' ' && (chuoi[i + 1] == ' ' || chuoi[i + 1] == '\0')) {
            sotu++;
        }
    }
    // In so tu
    printf("So tu trong chuoi: %d\n", sotu);
    return 0;
}

