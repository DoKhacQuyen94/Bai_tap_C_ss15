
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[1000];
    printf("Nhap chuoi bat ki: ");
    fgets(c,sizeof(c),stdin);
    int chuSo = 0, chuCai = 0, dacBiet = 0;
    for(int i = 0; i < strlen(c); i++){
        if(isdigit(c[i])){
            ++chuSo;
        }else if(isalpha(c[i])){
            ++chuCai;
        }else{
            ++dacBiet;
        }
    }    
    printf("So luong chu so : %d\n", chuSo);
    printf("So luong chu cai : %d\n", chuCai);
    printf("So luong ki tu dac biet : %d\n", dacBiet);
    return 0;
}