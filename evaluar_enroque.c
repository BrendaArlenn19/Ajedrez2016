/*
    la variable turno viene desde un contador del main, que indica el número de turno
    que se está jugando
*/

void evauar_enroque(char tablero[8][8], int turno, int pos_torre_x, int pos_torre_y)
{
    if((turno % 2) == 1)
    {
        if((pos_torre_x == 0) && (pos_torre_y == 0)) 
            enrocar_largo_blancas(tablero);      
        if((pos_torre_x == 0) && (pos_torre_y == 7)) 
            enrocar_corto_blancas(tablero);
    }
    
    if((turno % 2) == 0)
    {
        if((pos_torre_x == 7) && (pos_torre_y == 0)) 
            enrocar_corto_negras(tablero);      
        if((pos_torre_x == 7) && (pos_torre_y == 7)) 
            enrocar_largo_negras(tablero);
    }
        