#include <stdio.h>

int main() {
    float voltage;

    printf("=== SMART BATTERY STATUS INDICATOR ===\n");
    printf("Enter the current battery voltage (e.g., 4.2, 3.7, 3.0): ");
    scanf("%f", &voltage);

    printf("\nANALYSIS RESULTS:\n");
    printf("Voltage: %.2f V\n", voltage);

    if (voltage >= 3.8) {
        printf("Charge Level: High\n");
        printf("LED Color: GREEN\n");
        printf("Action: Safe to use.\n");
    }
    else if (voltage >= 3.4 && voltage < 3.8) {
        printf("Charge Level: Medium\n");
        printf("LED Color: YELLOW\n");
        printf("Action: Monitor usage.\n");
    }
    else if (voltage >= 3.1 && voltage < 3.4) {
        printf("Charge Level: Low\n");
        printf("LED Color: ORANGE\n");
        printf("Action: Recharge soon.\n");
    }
    else {
        printf("Charge Level: Critical\n");
        printf("LED Color: RED\n");
        printf("Action: RECHARGE NOW!\n");
    }

    return 0;
}
