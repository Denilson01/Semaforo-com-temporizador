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
    int bloco = 0;
    int cont = 0;
    init_semaforo();
    init_display7seg();
   
    while(1)
    {
        switch(bloco)
        {
            case 0:
                verde(1);
                amarelo(0);
                vermelho(0);
                delay(1000);
                bloco = 1;
                break;
                
                
            case 1:
                verde(0);
                amarelo(1);
                vermelho(0);
                delay(1000);
                bloco = 2;                
                break;
                
                
            case 2:
                verde(0);
                amarelo(0);
                vermelho(1);
                delay(1000);
                bloco = 0;
                break;
                
                
            case 3:
                
                break;
        
        
        
        
        }
    }
}