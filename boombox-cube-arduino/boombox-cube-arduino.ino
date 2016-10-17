//Arreglo con los pines conectados a los LEDs en orden
int leds[] = { 2, 3, 4, 5, 6, 7, 8, 9 };

void setup() {
  int i;

  //Inicializa todos los pines de los led como salida
  for (i = 0; i < 8; i++)
    pinMode(leds[i], OUTPUT);
}

void loop() {
  int i, nivel;

  //Lee el nivel de audio (un numero entre 0 y 1023)
  nivel = analogRead(0);

  //Se actualizan los 8 leds
  for (i = 0; i < 8; i++) {
    //Si el nivel divididido entre 32 es mas alto que el numero
    //de led, se enciende el led. Caso contrario se apaga.
    if (nivel / 32 > i)
      digitalWrite(leds[i], HIGH);
    else
      digitalWrite(leds[i], LOW);
  }
}
