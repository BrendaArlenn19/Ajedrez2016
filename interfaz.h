#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tablero.h"

enum animaciones
{
  ANIMACION_JAQUE,
  ANIMACION_JAQUE_MATE,
  ANIMACION_GANA_JUGADOR_1,
  ANIMACION_GANA_JUGADOR_2,
  ANIMACION_BIENVENIDA,
  ANIMACION_DESPEDIDA
};

enum opciones
{
  OPCION_INICIAR_PARTIDA = 1,
  OPCION_CONTINUAR_PARTIDA,
  OPCION_MOSTRAR_MANUAL,
  OPCION_CONFIGURAR,
  OPCION_SALIR
};

char capturar_caracter (void);
void setUp (void);
void manual (void);
void mostrar_animacion (int n);
void mostrar_opciones (void);
void piezas_comidas (int a);
void letreros (int n);
void mostrar_menu (struct tablero *t);
void imprimir_tablero (struct tablero *t);
void reglas_alfil (void);
void reglas_basicas (void);
void reglas_caballo (void);
void reglas_enroque (void);
void reglas_jaque (void);
void reglas_jaque_mate (void);
void reglas_peon (void);
void reglas_rey (void);
void reglas_reyna (void);
void reglas_torre (void);

#endif/*__INTERFAZ_H__*/
