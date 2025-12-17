STM32 Timer ADC DMA Simulation
Overview

This project demonstrates a timer-driven ADC data acquisition system with DMA transfer, based on the STM32 Blackpill microcontroller concept.

Due to the unavailability of physical STM32 hardware, the project is implemented as a Windows-based C simulation while following embedded system design principles.

The implementation reflects how the same logic would be executed on real STM32 hardware.

Objective

The objective of this project is to:

Generate a periodic 100Hz timer event

Trigger ADC sampling on each timer event

Transfer ADC data using a DMA-like mechanism

Observe and verify the acquired data

Implementation Details
Timer

A 100Hz timer is simulated using a 10ms delay.
Each delay represents a timer overflow event in an STM32 timer peripheral.

ADC

ADC behavior is simulated by generating 12-bit sampled values.
These values represent analog input readings from an ADC channel.

DMA

DMA functionality is simulated using a memory-to-memory copy.
ADC data is transferred from the ADC buffer to the DMA buffer without direct CPU involvement, reflecting DMA operation.

Project Structure
stm32-timer-adc-dma/
│
├── main.c
└── README.md


main.c contains the complete source code

README.md documents the project

How to Build and Run

Compile the code using GCC:

gcc main.c -o main


Run the executable:

./main


Observe the generated output on the console.

Notes

The simulation approach was chosen due to hardware limitations.

The core logic can be directly adapted to STM32 HAL or bare-metal firmware.

The focus of this project is on understanding timer-based ADC triggering and DMA data transfer.

Conclusion

This project demonstrates a clear understanding of periodic ADC sampling using a timer and efficient data movement using DMA concepts, as commonly implemented in STM32 embedded systems.
