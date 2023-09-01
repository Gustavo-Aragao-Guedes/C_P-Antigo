// Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define Sleep(g) for(f=0; f< g*200000; f++);
#define u GetStdHandle(STD_OUTPUT_HANDLE)
#define textcolor_2(l,f) SetConsoleTextAttribute(u,l+(f<<4));
int main(){
    int j,i,f;
    int matriz[2][5];
    srand(time(NULL));
    for(i=0; i<2; i++ ){
        for(j=0; j<5; j++){
            matriz[i][j]=rand()%100;
        }
    }
    textcolor_2(14,0);
    printf("\n\t\t<<<<<MATRIZ>>>>>\n\n");
    for(i=0; i<2; i++ ){
        printf("\t\t");
        for(j=0; j<5; j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    textcolor_2(11,0);
    for(i=0; i<5; i++)
        matriz[1][i] = matriz[0][i] + matriz[1][i];
        printf("\n\n\t\t");
        for(j=0; j<5; j++){
            printf("%3d ",matriz[1][j]);
    }
    textcolor_2(10,12);
    printf("<<=== RESULTADO <<===\n\n");   
    textcolor_2(14,0); 
    printf("\t\t Tecle Para Sair --> ");
    j=100;
    textcolor_2(13,14);
    while( ! kbhit()){
        printf("( %3d  )\b\b\b\b\b\b\b\b",j);     
        j--;
        Sleep(500);
        if( ! j ) break;
    }
    printf("( %3d  )",j);
    Sleep(2000);
    return 0;
}
