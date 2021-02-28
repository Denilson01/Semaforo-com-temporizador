/*
 * File:   semaforoped.c
 * Author: Micro
 *
 * Created on 28 de Fevereiro de 2021, 01:11
 */


#include <xc.h>
#define VERMELHOPED  PORTDbits.RD3
#define VERDEPED  PORTDbits.RD2

void init_semaforoped(void)
{
TRISDbits.TRISD3 = 0;    
TRISDbits.TRISD2 = 0;    
PORTDbits.RD3 = 0;
PORTDbits.RD2 = 0;
}

void vermelhoped(int x)
{
    PORTDbits.RD3 = x;
}

void verdeped(int x)
{
    PORTDbits.RD2 = x;
}