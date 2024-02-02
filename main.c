#include <stdio.h> 
#include <stdbool.h> // Pentru tipul de date bool.

// Funcție pentru citirea puterii motorului de la senzor.
float citestePutereMotor() {
    float putereMotorCitita;
    printf("Introduceti puterea motorului citita de senzor: ");
    scanf("%f", &putereMotorCitita);
    return putereMotorCitita;
}

int main() {
    // Declararea variabilelor necesare;
    bool warningGenerat = false; // Flag pentru semnalul de avertizare (WARNING)
    bool alarmGenerat = false; // Flag pentru semnalul de alarmă (ALARM)
    bool compresorPornit = false; // Flag pentru starea compresorului auxiliar;

    // Citire puterea motorului de la senzor
    float putereMotor = citestePutereMotor();

    // Afișare puterea motorului pe ecranul de tip ceas;
    printf("Puterea motorului este: %.2f N.\n", putereMotor);

    // Verificare condițiile și generare semnale corespunzătoare.
    if (putereMotor < 110000) {
        printf("Semnal: WARNING - Puterea motorului este mai mică decât 110000 N.\n");
        warningGenerat = true;
    }

    if (putereMotor < 80000) {
        printf("Semnal: ALARM - Puterea motorului este mai mică decât 80000 N.\n");
        alarmGenerat = true;
    }

    // Verificare/gestionare pornirea/oprirea compresorului auxiliar în funcție de semnalele generate;
    if (warningGenerat && !compresorPornit) {
        printf("Pornire compresor auxiliar pentru semnalul WARNING.\n");
        compresorPornit = true;
    }

    if (alarmGenerat && !compresorPornit) {
        printf("Pornire compresor auxiliar pentru semnalul ALARM.\n");
        compresorPornit = true;
    }

// Verificare/gestionare oprirea compresorului auxiliar dacă puterea motorului este mai mare decât 140000 N și compresorul este pornit;

printf("Starea compresorului auxiliar inainte de oprire: %s\n", compresorPornit ? "Pornit" : "Oprit"); // Afisarea starii compresorului inainte de oprire;

if (putereMotor > 140000 && compresorPornit) {
    printf("Oprire compresor auxiliar. Puterea motorului este mai mare decât 140000 N.\n");
    compresorPornit = false;
}

printf("Starea compresorului auxiliar dupa oprire: %s\n", compresorPornit ? "Pornit" : "Oprit"); // Afisarea starii compresorului dupa oprire;


    return 0;
}
