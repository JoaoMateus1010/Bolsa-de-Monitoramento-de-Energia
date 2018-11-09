/*
 * ADC.c
 *
 * Criado: 18/05/2018 08:17:09
 * Autor : JOÃO MATEUS DIAS DO CARMO
 * Instituição: UNIVERSIDADE FEDERAL DO CEARÁ
 * QUIXADÁ
 */
#include "ADC.h"
void init_ADC(){
	ADMUX  = 0b11000000;
	ADCSRA = 0b10000111;
	ADCSRB = 0b00000000;
}
unsigned int Read_ADC(unsigned int PIN_ADC_ANALOG){
	int Valor_da_leitura = 0;	
	ADMUX  = PIN_ADC_ANALOG;
	ADCSRA |= (1<<ADSC);
	while(ADCSRA & (1<<ADSC)){/*CONVERTENDO*/}
	Valor_da_leitura = ADC;
	return Valor_da_leitura;
}
void Enable_Read_ADC(unsigned int PIN_ADC_ANALOG){
	ADMUX  = PIN_ADC_ANALOG;
	ADCSRA |= (1<<ADSC);
}