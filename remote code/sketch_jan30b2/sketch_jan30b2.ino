bool forward;


void setup() {
  // frequency scaler parameter
  CLKPR = (1 << CLKPCE);
  CLKPR = (1 << CLKPS0);

  // Autoriser les modifications des registres de division de fréquence
  CLKPR &= ~(1 << CLKPCE);

  // Timer parameter for OUTPUT PIN 5 and 6 and 9 and 10
  TCCR0A = 0b10110001; // pin 5
  TCCR0B = 0b00000001; // Pin 6
  TCCR1A = 0b10110001; // Pin 9
  TCCR1B = 0b00000001; // Pin 10

  // PWM OUTPUT
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  // Buttons INPUT
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT); 

  // Enable OUTPUT
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  // State buttons
  digitalWrite(1, HIGH); // Forward
forward = digitalRead(1) == HIGH

  //ENABLE A AND B
  digitalWrite(12, HIGH); // Activation du Hacheur 4Q Moteur 1
  digitalWrite(13, HIGH); //Activation du hacheur 4Q Moteur 2


  if (forward) { // if the turn forward button is HIGH
    OCR0A = 191;
    OCR0B = OCR0A;
    OCR1A = 63;
    OCR1B = OCR1A;
    delay(3000);
    OCR0A = 127;
    OCR0B = OCR0A;
    OCR1A = 127;
    OCR1B = OCR1A;
  }
  else {
    OCR0A = 127; // If none button is pressed
    OCR0B = 127;
    OCR1A = 127;
    OCR1B = 127;
  }
}

void loop() {
  // Votre code pour la boucle loop() va ici
}