/*
 * File:   main.c
 * Author: afreeman123
 *
 * Created on 09 November 2016, 19:28
 */


#include "Librairies Clean\init_port.h"
#include "Librairies Clean\motors.h"
#include "Librairies Clean\prox.h"
#include "Librairies Clean\led.h"
#include "other libs\utility.h"



int main(void) {
    int selector = getselector();
    switch (selector) {
        case 0: aggressive(); break;
        case 1: fear(); break;
        case 2: curious(); break;
        case 3: love(); break;
        case 4: maze(); break;
        default: maze(); break;
    }
}
