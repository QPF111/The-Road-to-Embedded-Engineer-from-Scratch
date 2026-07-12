#ifndef REGISTER_H
#define REGISTER_H

#include <stdint.h>

  typedef struct {
    
    volatile uint32_t MODER;
    
    volatile uint32_t ODR;    

    volatile uint32_t IDR;
                 } GPIO_TypeDef;
    
    extern GPIO_TypeDef GPIOA;

    extern GPIO_TypeDef GPIOB;

 #endif