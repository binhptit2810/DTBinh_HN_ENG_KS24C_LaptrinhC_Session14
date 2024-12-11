#include <stdio.h>
#include <string.h> 

int main() {
    // Khai bao chuoi 
    char kitu[100];
    // yeu cau nguoi dung nhap vao 1 chuoi ki tu 
    printf("Moi ban nhap vao 1 chuoi ki tu: ");
    scanf("%s", kitu); 
    // In chuoi ma nguoi dung nhap vao 
    printf("Chuoi cua ban la: %s\n", kitu);
    // tinh do dai cua chuoi ki tu
    int size =strlen(kitu); 
    printf("Do dai cua chuoi la: %d\n",size);
    return 0;
}

