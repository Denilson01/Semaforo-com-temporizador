/*
 * File:   main.c
 * Author: Micro
 *
 * Created on 27 de Fevereiro de 2021, 15:34
 */

#include "semaforo.h"
#include "display7seg.h"
#include "delay.h"
#include "config.h"
#include <xc.h>

void main(void)
{
    int cont = 0;
    init_display7seg();
    
    while(1)
    {
        display(cont);
        delay(1000);
        if(cont >= 15)
            cont = 0;
    }
}