 int ledR = 13;
 int ledV = 12;
 int ledJ = 11;


void setup() {
  // Configurer la broche de la LED en sortie
  pinMode(ledR, OUTPUT);`
  pinMode(ledV, OUTPUT);
  pinMode(ledJ, OUTPUT);
}

void loop() {
  // Allumer la LED
  digitalWrite(ledR, HIGH);
  delay(5000);
  digitalWrite(ledR, LOW);
  delay(500);
// Attendre 0,5 seconde
  digitalWrite(ledV, HIGH);
  delay(500);
  // Éteindre la LED
digitalWrite(ledV, LOW);
  delay(500);
// Attendre 0,5 seconde
  digitalWrite(ledJ, HIGH);
  delay(5000);
    // Éteindre la LED
   digitalWrite(ledJ, LOW);
  delay(500);
   // Attendre 0,5 seconde

  // Éteindre la LED
  delay(500);  // Attendre 0,5 seconde
}