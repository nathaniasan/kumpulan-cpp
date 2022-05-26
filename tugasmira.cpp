#include<stdio.h>
#include<conio.h>
int main()
{
int M1[2][2], M2[2][2],M3[2][2], i, j;
printf("MATRIX 1\n");
    for ( i=0; i<=1; i++ ) {
    for ( j=0; j<=1; j++ ) {
    printf("Elemen[%d][%d] : ",i,j);
    scanf("%d",&M1[i][j]);
    }
}
printf("\nMATRIX 2\n");
    for ( i=0; i<=1; i++ ) {
    for ( j=0; j<=1; j++ ) {
    printf("Elemen[%d][%d] : ",i,j);
    scanf("%d",&M2[i][j]);
    }
}
printf("\nHASIL PENJUMLAHAN\n\n");
    for ( i=0; i<2; i++ ) {
    for ( j=0; j<2; j++ )
    M3 [i][j]= M1[i][j]+M2[i][j];
    printf("%d\t",M3);
    printf("\n");}getch();
}