#include <stdio.h>

int main() {
    float voltage;

    printf("Enter voltage value: ");
    scanf("%f", &voltage);

    if(voltage > 240)
        printf("Overvoltage detected! Load disconnected.");
    else
        printf("Voltage normal. Load connected.");

    return 0;
}
