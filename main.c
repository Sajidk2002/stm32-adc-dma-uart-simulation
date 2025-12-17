#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ADC_SIZE 10

int main() {

    int adc_buffer[ADC_SIZE];
    int dma_buffer[ADC_SIZE];
    int frame = 0;

    srand(time(0));

    while(frame < 100) {

        // 100Hz timer simulation (10ms delay)
        Sleep(10);
        frame++;

        // ADC read simulation (12-bit ADC)
        for(int i = 0; i < ADC_SIZE; i++) {
            adc_buffer[i] = rand() % 1024;
        }

        // DMA transfer simulation
        for(int i = 0; i < ADC_SIZE; i++) {
            dma_buffer[i] = adc_buffer[i];
        }

        // UART output simulation
        printf("Frame %d: ", frame);
        for(int i = 0; i < ADC_SIZE; i++) {
            printf("%d ", dma_buffer[i]);
        }
        printf("\n");
    }

    printf("Simulation finished successfully.\n");
    return 0;
}
