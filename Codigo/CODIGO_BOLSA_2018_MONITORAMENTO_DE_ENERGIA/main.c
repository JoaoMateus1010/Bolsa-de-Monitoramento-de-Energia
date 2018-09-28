/*
 * main.c
 *
 * Criado: 18/05/2018 08:17:09
 * Autor : JOÃO MATEUS DIAS DO CARMO
 * Instituição: UNIVERSIDADE FEDERAL DO CEARÁ
 * QUIXADÁ
 */

#include "DEFINES.h"
unsigned char ByteRecebido;
unsigned long int Corrente_medida = 0;
unsigned int ADC_LIDO = 0;
int main(void){  
	init_board();
	init_ADC();
	init_USART();  
    while (TRUE){
		
    }
	return 0;
}
ISR(TIMER1_OVF_vect){
	ADC_LIDO = Read_ADC(ADC3);
	Corrente_medida = ADC_LIDO;
	Corrente_medida /=11;
}
ISR(USART_RX_vect){
	ByteRecebido = USART_Receive();
	USART_printf_int(Corrente_medida);
	USART_printfln(" FATOR * UNIDADE (A)");	
}
