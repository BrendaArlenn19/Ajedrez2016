int
validar_movimientos_continuos (char tablero[8][8], int direccion[4][2],
			       int x1, int y1, int x2, int y2)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;

  while (i < 4)
    {
      siguiente_x = x1 + direccion[i][0];
      siguiente_y = y1 + direccion[i][1];
      while (coordenada_valida (siguiente_x, siguiente_y) &&
	     (tablero[siguiente_x][siguiente_y] == ' '
	      || color_pieza (tablero[x1][y1]) !=
	      color_pieza (tablero[siguiente_x][siguiente_y])))
	{

	  if (siguiente_x == x2 && siguiente_y == y2)
	    {
	      return 1;
	    }

	  siguiente_x = siguiente_x + direccion[i][0];
	  siguiente_y = siguiente_y + direccion[i][1];
	}
      i = i + 1;
    }
  return -1;
}
