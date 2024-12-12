#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Nhập chuỗi: ");
    fgets(str, sizeof(str), stdin);
    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0;        
            }
        } else { 
            newWord = 1; 
        }
    }
    printf("Chuỗi sau khi viết hoa chữ cái đầu: %s", str);

    return 0;
}
