#include <stdio.h>
#include "pico/stdlib.h"

const uint led_pin_red = 13; // LED externo conectado à GPIO (13)
#define ponto 200           // Um ponto (.) é representado pelo LED aceso por 0,2 segundos
#define traco 800           // Um traço (-) é representado pelo LED aceso por 0,8 segundos
#define intervalo_gap 125   // Intervalo entre pontos e traços dentro de uma mesma letra
#define intervalo_letra 250 // Intervalo entre letras
#define intervalo_ciclo 3000 // Intervalo após completar o ciclo

void piscar_led(uint tempo_ligado, uint intervalo) {
    gpio_put(led_pin_red, true);
    sleep_ms(tempo_ligado);

    gpio_put(led_pin_red, false);
    sleep_ms(intervalo);
}

void transmitir_sos() {
    for (int i = 0; i < 3; i++) { //Três pontos (S)
        piscar_led(ponto, intervalo_gap);
    }
    sleep_ms(intervalo_letra);


    for (int i = 0; i < 3; i++) { // Três traços (O)
        piscar_led(traco, intervalo_gap);
    }
    sleep_ms(intervalo_letra);

  
    for (int i = 0; i < 3; i++) { // Três pontos (S)
        piscar_led(ponto, intervalo_gap);
    }
    sleep_ms(intervalo_ciclo);
}

int main() {

    gpio_init(led_pin_red); // Inicia o GPIO do pino conectado ao LED (led_pin_red)

    
    gpio_set_dir(led_pin_red, GPIO_OUT);// Pino do LED como saída OUT

    
    stdio_init_all(); // Inicializa entrada e saída (stdio)

    // Loop infinito
    while (true) {
        
        transmitir_sos(); // Chama a função que transmite o SOS em código Morse utilizando o LED Vermelho 
    }
}
