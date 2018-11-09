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
unsigned int media_corrente = 0;
unsigned int count=0;
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
	media_corrente += Corrente_medida;		
	count++;	
	if(count==40){
		USART_printf_int(media_corrente/40);
		USART_printfln(" A");
		media_corrente=0;
		count=0;
	}else{
		media_corrente +=Corrente_medida;		
	}
}
ISR(USART_RX_vect){
	
}