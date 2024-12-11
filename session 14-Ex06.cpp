#include <stdio.h>
#include <string.h>

int main() {
    // khai bao va gan gia tri cho chuoi
    char chuoi[100] = "Hello, world! 123";
    int dem = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        // kiem tra xem ki tu la chu cai
        if ((chuoi[i]>='A' &&chuoi[i]<= 'Z')||(chuoi[i]>= 'a'&& chuoi[i] <='z')) 
            dem++;
    }
    // in ket qua ra ngoai man hinh
    printf("So ky tu la chu cai trong chuoi: %d\n", dem);
    return 0;
}

