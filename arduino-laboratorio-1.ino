// Definición de los pines de los LEDs
int green = 11; 
int red = 12;
int yellow = 13;

// Variables para almacenar el estado de los LEDs
bool greenState = false;
bool redState = false;
bool yellowState = false;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT); 
  pinMode(yellow, OUTPUT); 
  
  // Inicializa la comunicación serial
  Serial.begin(9600);
}

void loop() {
  // Verifica si hay datos disponibles en el monitor serial
  if (Serial.available() > 0) {
    int command = Serial.parseInt(); // Lee el comando enviado
    
    // Control del LED verde
    if (command == 1) {
      greenState = !greenState;  // Cambia el estado del LED verde
      digitalWrite(green, greenState ? HIGH : LOW); // Aplica el nuevo estado
    } else if (command == 2) {
      greenState = !greenState;  // Cambia el estado del LED verde
      digitalWrite(green, greenState ? HIGH : LOW); // Aplica el nuevo estado
    }
    
    // Control del LED rojo
    if (command == 3) {
      redState = !redState;  // Cambia el estado del LED rojo
      digitalWrite(red, redState ? HIGH : LOW); // Aplica el nuevo estado
    } else if (command == 4) {
      redState = !redState;  // Cambia el estado del LED rojo
      digitalWrite(red, redState ? HIGH : LOW); // Aplica el nuevo estado
    }
    
    // Control del LED amarillo
    if (command == 5) {
      yellowState = !yellowState;  // Cambia el estado del LED amarillo
      digitalWrite(yellow, yellowState ? HIGH : LOW); // Aplica el nuevo estado
    } else if (command == 6) {
      yellowState = !yellowState;  // Cambia el estado del LED amarillo
      digitalWrite(yellow, yellowState ? HIGH : LOW); // Aplica el nuevo estado
    }
  }
}