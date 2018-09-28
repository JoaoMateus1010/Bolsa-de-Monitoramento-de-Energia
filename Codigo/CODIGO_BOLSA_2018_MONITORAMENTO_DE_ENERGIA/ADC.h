/*
 * ADC.h
 *
 * Criado: 18/05/2018 08:17:09
 * Autor : JO�O MATEUS DIAS DO CARMO
 * Institui��o: UNIVERSIDADE FEDERAL DO CEAR�
 * QUIXAD�
 */
#ifndef ADC_H_
#define ADC_H_
#include <avr/io.h>
#define ADC0 0b00000000
#define ADC1 0b00000001
#define ADC2 0b00000010
#define ADC3 0b00000011
#define ADC4 0b00000100
#define ADC5 0b00000101
#define ADC6 0b00000110
#define ADC7 0b00000111
void init_ADC();
unsigned int Read_ADC(unsigned int PIN_ADC_ANALOG);
void Enable_Read_ADC(unsigned int PIN_ADC_ANALOG); //Habilita leitura por interrup��o
#endif /* ADC_H_ */