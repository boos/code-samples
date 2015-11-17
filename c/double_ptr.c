#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int righe   = 20;
    const int colonne = 10;

    int i, j;

    int **Matrice = malloc( righe * sizeof( int * ) );

    for ( i = 0; i < righe; i++ )
        Matrice[ i ] = malloc( colonne * sizeof( int ) );

    for ( i = 0; i < righe; i++ )
        for ( j = 0; j < colonne; j++ )
            Matrice[ i ][ j ] = ( i + 1 ) * ( j + 1 );

    for ( i = 0; i < righe; i++ )
    {
        for ( j = 0; j < colonne; j++ )
            printf( "%3d ", Matrice[ i ][ j ] );

        printf( "\n" );
    }

    for ( i = 0; i < righe; i++ )
        free( Matrice[ i ] );

    free( Matrice );

    return 0;

}
