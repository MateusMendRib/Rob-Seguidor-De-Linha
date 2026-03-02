//Seguidor de linha com controle de velocidade

// Pinos dos sensores de linha (digitais)
const int sensorEsquerdo = 2;
const int sensorDireito = 4;

// Pinos dos motores
const int motorEsq1 = 9;   // PWM
const int motorEsq2 = 10;  // PWM
const int motorDir1 = 5;   // PWM
const int motorDir2 = 6;   // PWM

int velocidadeBase = 135;    // Velocidade normal em linha reta
int velocidadeBasedireita = 135;    // Velocidade normal em linha reta
int velocidadeCurvaFrente = 140;  // Velocidade do motor que vai para frente na curva
int velocidadeCurvaFrentedireita = 180;  // Velocidade do motor que vai para frente na curva
int velocidadeCurvaReverso = 140; // Velocidade do motor que vai para trás na curva
int velocidadeCurvaReversodireita = 180; // Velocidade do motor que vai para trás na curva

void setup() {
  pinMode(sensorEsquerdo, INPUT);
  pinMode(sensorDireito, INPUT);
  
  pinMode(motorEsq1, OUTPUT);
  pinMode(motorEsq2, OUTPUT);
  pinMode(motorDir1, OUTPUT);
  pinMode(motorDir2, OUTPUT);
  
  pare();
}

void loop() {
  bool linhaEsq = digitalRead(sensorEsquerdo) == HIGH;
  bool linhaDir = digitalRead(sensorDireito) == HIGH;

  // Lógica de controle invertida
  if (!linhaEsq && !linhaDir) {
    frente();  
  } else if (!linhaEsq && linhaDir) {
    direita(); 
  } else if (linhaEsq && !linhaDir) {
    esquerda(); 
  } else {
    pare();     
  }
  
  // Pequeno delay para estabilidade
  delay(25);
}

void frente() {
  analogWrite(motorEsq1, 0);
  analogWrite(motorEsq2, velocidadeBase);
  analogWrite(motorDir1, 0);
  analogWrite(motorDir2, velocidadeBasedireita);
}

void esquerda() {
  analogWrite(motorEsq1, velocidadeCurvaReverso);
  analogWrite(motorEsq2, 0);
  analogWrite(motorDir1, 0);
  analogWrite(motorDir2, velocidadeCurvaFrentedireita);
}

void direita() {
  analogWrite(motorEsq1, 0);
  analogWrite(motorEsq2, velocidadeCurvaFrente);
  analogWrite(motorDir1, velocidadeCurvaReversodireita);
  analogWrite(motorDir2, 0);
}

void pare() {
  analogWrite(motorEsq1, 0);
  analogWrite(motorEsq2, 0);
  analogWrite(motorDir1, 0);
  analogWrite(motorDir2, 0);
}
