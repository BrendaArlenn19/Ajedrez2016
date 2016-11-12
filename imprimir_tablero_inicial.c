void
inicializar (char tablero[8][8])
{
  	/* Arreglo de enteros para su posterior conversion a codigo ASCII */
	int partesuperior[50]={218,196,196,196,196,194,196,196,196,196,194,196,196,196,196,194,196,196,196,196,194
					,196,196,196,196,194,196,196,196,196,194,196,196,196,196,194,196,196,196,196,191};
	int parteinferior[50]={192,196,196,196,196,193,196,196,196,196,193,196,196,196,196,193,196,196,196,196,193
					,196,196,196,196,193,196,196,196,196,193,196,196,196,196,193,196,196,196,196,217};
	int cuerpo[50] = {195,196,196,196,196,197,196,196,196,196,197,196,196,196,196,197,196,196,196,196,197,
					196,196,196,196,197,196,196,196,196,197,196,196,196,196,197,196,196,196,196,180,};
	int a = 0;/* variable de control de ciclos*/
	int c = 179; 
	int x = 0;/* variable de control de la posicion del tablero en x*/
	int y = 0;/* variable de control de la posicion del tablero en y*/
	int f = 8;/* variable para la nmeracion de filas*/
	int blanca = 220;
	/* Se inicializa el tablero con caracteres nulos para no tener basura*/
	while (y<=8){
		while (x<=8){
			tablero[x][y] = '\0';
			x = x +1;
		}
		x = 0;
		y = y +1;
	}
	x = 0;
	y = 0;
  /* Iniciando piezas */
   int i = 0;
  tablero[0][0] = 't';
  tablero[0][1] = 'c';
  tablero[0][2] = 'a';
  tablero[0][3] = 'd';
  tablero[0][4] = 'r';
  tablero[0][5] = 'a';
  tablero[0][6] = 'c';
  tablero[0][7] = 't';
  tablero[7][0] = 'T';
  tablero[7][1] = 'C';
  tablero[7][2] = 'A';
  tablero[7][3] = 'D';
  tablero[7][4] = 'R';
  tablero[7][5] = 'A';
  tablero[7][6] = 'C';
  tablero[7][7] = 'T';
  while (i < 8)
    {
/* Piezas blancas se identifican por estar en mayusculas, negras en minuscula */
tablero[6][i] = 'P';
tablero[1][i] = 'p';
      i = i + 1;
    }
  /* impresion del tablero de ajedrez*/
	printf("\n");
	printf("    ");
	while (a < 50){
		/* Se indica el tipo de dato %c para que interprete el entero segun el codigo ASCII*/
		printf("%c",partesuperior[a]);
		a = a +1;
	}
	a = 0;
	while (y < 7){
		
			printf("\n");
				printf("  %d ",f);
				while (a<8){
					
				printf("%c %c  ", c,tablero[y][x]);
				a= a +1; 
				x = x +1;
			}	
			printf("%c",c);
			printf("\n");
			printf("    ");
			a = 0;
			while (a < 50){
				printf("%c",cuerpo[a]);
				a = a +1;
			}
		a = 0;
		x = 0;
		y = y +1;
		f = f -1;
	}
	printf("\n");
		printf("  %d ",f);
				while (a<8){
				printf("%c %c  ", c,tablero[y][x]);
				a= a +1; 
				x = x +1;
			}	
			printf("%c",c);
			printf("\n");
			printf("    ");
			a = 0;
	while (a < 50){
		printf("%c",parteinferior[a]);
		a = a +1;
	}
	printf("\n");
		printf("    ");
	a = 0;
	while (a < 8){
		printf("  %c  ",65 + a);
		a = a +1;
	}}
