/*
 * UART.h
 *
 * Criado: 18/05/2018 08:17:09
 * Autor : JOÃO MATEUS DIAS DO CARMO
 * Instituição: UNIVERSIDADE FEDERAL DO CEARÁ
 * QUIXADÁ
 */
#ifndef UART_H_
#define UART_H_
#include <avr/io.h>
#define Fclock 16000000
#define BAUD 9600
#define USART_BAUDRATE (Fclock/16/BAUD-1)
void init_USART();
void USART_Transmit(unsigned char data);
unsigned char USART_Receive();
void USART_printf(unsigned char *String);
void USART_printfln(unsigned char *String);
void USART_printf_int(unsigned int Valor); // Função escreve valores de 0 até 9999
#endif /* UART_H_ */