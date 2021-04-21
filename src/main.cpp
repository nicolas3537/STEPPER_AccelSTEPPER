// Ajout des librairy
#include <Arduino.h>
#include <AccelStepper.h>

//Définition des variable hardware
#define PIN_DIR 2
#define PIN_STEP 3
#define TYPE_INTERFACE_MOTEUR 1
#define STEPS_PAR_REVOLUTION 200

AccelStepper monMoteur = AccelStepper(TYPE_INTERFACE_MOTEUR, PIN_STEP, PIN_DIR);

void setup() {
  // put your setup code here, to run once:
monMoteur.setMaxSpeed(6000.0);
monMoteur.setAcceleration(5000.0);
}

void loop() {
  // put your main code here, to run repeatedly:
  monMoteur.moveTo(20000);
  monMoteur.runToPosition();
  delay(2000);
  monMoteur.moveTo(40000);
  monMoteur.runToPosition();

}