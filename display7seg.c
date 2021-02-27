/*
 * File:   display7seg.c
 * Author: Micro
 *
 * Created on 27 de Fevereiro de 2021, 16:34
 */


#include <xc.h>

void display7seg_init(void)
{
    ANSELH = 0;
    TRISB = 0;
    PORTB = 0;
}

void display(int estado)
{
    PORTB = estado;
}