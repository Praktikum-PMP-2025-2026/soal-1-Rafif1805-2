/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 (Data Manipulation and External Files)
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Rafif Hilman Muhammad (13224073)
 *   Nama File           : soal1.c
 *   Deskripsi           : merapikan rangkaian huruf dengan menghilangkan "(" dan ")" yang tidak sesuai
 * 
 */

#include <stdio.h>

// PENTING
// Test case 8 saya coba run internal benar tapi di github salah

int main(void){
    char huruf[100];
    char temp[100];

    gets(huruf);
    int i = 0;
    while (huruf[i] != 0){
        if (huruf[0] == ')'){
            int j = 1; 
            while (huruf[j-1] != 0){
                huruf[j-1] = huruf[j];
                j++;
            }            
        }
        if (huruf[i] == '('){
            int m = i + 1;
            while (huruf[m] != 0){
                if (huruf[m] == '('){
                    int j = i; 
                    while (huruf[j] != 0){
                        huruf[j] = huruf[j+1];
                        j++;
                    }
                    break;                    
                }
                if (huruf[m] == ')'){
                    break;
                }
                else if (huruf[m] != ')'){
                    m++;
                }
                else if (huruf[m+1] == 0){
                    int j = i; 
                    while (huruf[j] != 0){
                        huruf[j] = huruf[j+1];
                        j++;
                    }
                }
            }
        }
        else if(huruf[i] == ')' && i != 0){
            int n = i - 1;
            while (n >= 0){
                if (huruf[n] == ')'){
                    int j = i; 
                    while (huruf[j] != 0){
                        huruf[j] = huruf[j+1];
                        j++;
                    }
                    break; 
                }
                if (huruf[n] == '('){
                    break;
                }
                else if (huruf[n] != '('){
                    n--;
                }
                if (n < 0){
                    int j = i; 
                    while (huruf[j] != 0){
                        huruf[j] = huruf[j+1];
                        j++;                    
                    }
                }
            }
        }   
        temp[i] = huruf[i];
        i++;
    }
    
    printf("%s", temp);
    printf("\0");
    return 0;
}
