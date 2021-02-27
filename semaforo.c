/*
 * File:   semaforo.c
 * Author: Micro
 *
 * Created on 27 de Fevereiro de 2021, 15:58
 */


#include <xc.h>


#define VERMELHO  PORTDbits.RD7
#define AMARELO   PORTDbits.RD6
#define VERDE     PORTDbits.RD5

void init_semaforo(void)
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    
    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
}

void vermelho(int x)
{
    VERMELHO = x;
}

void amarelo(int x)
{
    AMARELO = x;
}

void verde(int x)
{
    VERDE = x;
}

