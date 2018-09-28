/*
 * DEFINES.c
 *
 * Criado: 18/05/2018 08:17:09
 * Autor : JO�O MATEUS DIAS DO CARMO
 * Institui��o: UNIVERSIDADE FEDERAL DO CEAR�
 * QUIXAD�
 */ 
#include "DEFINES.h"
void init_board(void){
	/************************************************************************/
	/* DEFINI��O PARA O TC1 PARA A LEITURA DO AD                            */
	/************************************************************************/
	TCCR1A = 0b00000001;
	TCCR1B = 0b00000101;
	TCCR1C = 0b00000000;
	TIMSK1 = 0b00000001;
	/************************************************************************/
	/* HABILITAR INTERRUP��ES DO SISTEMA                                    */
	/************************************************************************/
	SREG = 0b10000000;
}