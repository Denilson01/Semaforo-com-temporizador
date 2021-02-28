/*
 * File:   botoes.c
 * Author: Micro
 *
 * Created on 28 de Fevereiro de 2021, 01:03
 */


#include <xc.h>

void init_botoes(void) //opcional
{
    TRISDbits.TRISD0 = 1;
    PORTDbits.RD0 = 0;
}

int botaoped(void) //opcional
{
    return(PORTDbits.RD0);
}