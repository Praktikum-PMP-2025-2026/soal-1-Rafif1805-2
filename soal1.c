/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 (Data Manipulation and External Files)
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Rafif Hilman Muhammad (13224073)
 *   Nama File           : soal1.c
 *   Deskripsi           : merapikan rangkaian huruf dengan menghilangkan "(" dan ")" yang tidak sesuai
 * 
 */

#include <stdio.h>

int main(void) {
    char huruf[100];

    scanf("%s", huruf);
    int i = 0;
    while (huruf[i] != 0){
        if (huruf[i] == '('){
            if (huruf[i+2] != ')'){
                int j = i; 
                while (huruf[j] != 0){
                    huruf[j] = huruf[j+1];
                    j++;
                }
            }
        }
        else if(huruf[i] == ')'){
            if (huruf[i-2] != '('){
                int l = i;
                while (huruf[l] != 0){
                    huruf[l] = huruf[l+1];
                    l++;
                }
            }
        }
        i++;
    }
    
    printf("%s", huruf);
    printf("\0");
    return 0;
}
