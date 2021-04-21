
#include <Wire.h>
#include <Adafruit_MLX90614.h>
 
// Instanciar objeto
Adafruit_MLX90614 termometroIR = Adafruit_MLX90614();
 
void setup() {
  // Iniciar comunicación serie
  Serial.begin(9600);
 
  // Iniciar termómetro infrarrojo con Arduino
  termometroIR.begin();
 
}
 
void loop() {
  // Obtener temperaturas grados Celsius
  float temperaturaAmbiente = termometroIR.readAmbientTempC();
  float temperaturaObjeto = termometroIR.readObjectTempC();
 
  // Mostrar información
  Serial.print("Temp. ambiente => ");
  Serial.print(temperaturaAmbiente);
  Serial.println("ºC");
 
  Serial.print("Temp. objeto => ");
  Serial.print(temperaturaObjeto);
  Serial.println("ºC");
  
  delay(2000);
 
  // Si quieres mostrar la información en grados Fahrenheit utiliza las funciones
  // readAmbientTempF() para temperatura ambiente
  // readObjectTempF() para temperatura del objeto
 
}
