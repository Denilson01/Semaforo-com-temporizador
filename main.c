/*
 * File:   main.c
 * Author: Micro
 *
 * Created on 27 de Fevereiro de 2021, 15:34
 */

#include "botoes.h"  //opcional
#include "semaforoped.h"
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
    init_semaforoped();
    init_botoes();
   
    while(1)
    {
        switch(bloco)
        {
            case 0:
                verde(1);
                amarelo(0);
                vermelho(0);
                vermelhoped(1);
                verdeped(0);
                cont = 9;
                bloco = 1;
                break;
                
            case 1:                
                display(cont);
                delay(1000);
                --cont;
                if(cont < 0)
                    bloco = 2;                   
                break;
                
                
            case 2:
                verde(0);
                amarelo(1);
                vermelho(0);
                delay(2000); 
                cont = 9;
                bloco = 4;                
                break;
                
            case 3: // contagem regressiva opcional
                display(cont); 
                delay(1000);
                --cont;
                if(cont < 0)
                    bloco = 4;                
                break;
                               
            case 4:
                verde(0);
                amarelo(0);
                vermelho(1); 
                vermelhoped(0);
                verdeped(1);
                cont = 9;
                bloco = 5;
                break;
                                
            case 5:
                display(cont);
                delay(1000);
                --cont;
                if(cont < 0)
                    bloco = 0;                 
                break;
        
        
        
        
        }
    }
}