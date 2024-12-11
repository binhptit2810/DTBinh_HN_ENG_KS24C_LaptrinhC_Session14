#include <stdio.h>
#include <string.h>

int main() {
    // khai bao va gan gia tri cho chuoi
    char chuoi[100] = "Xin chao cac ban";
    char kyTu;
    
    // yeu cau nguoi dung nhap vao 1 ki tu bat ki
    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &kyTu);
    // tinh so lan ki tu xuat hien trong chuoi
    int count = 0;
    int size = strlen(chuoi); 
    for (int i = 0; i < size; i++) {
        if (chuoi[i] == kyTu) {
            count++;
        }
    }
    // In ket qua
    printf("Ky tu '%c' xuat hien %d lan trong chuoi %s.\n",kyTu,count,chuoi);
    
    return 0;
}

