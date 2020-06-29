/*
Universidad Tecnica del Norte
Estudiante: Henry Lema
Carrera: CITEL
*/

int salida[]={13,12,11,10,9,8};// Creo un vector y declaro los pines de salida para los 6 leds
const int btn =5; //boton que lee la entrada alto o  bajo
void setup() {
 int i=0;
 for(i=0;i<6;i++){ //contador asigna la posicion
  pinMode(salida[i],OUTPUT);
  pinMode(btn,INPUT);
    }
}

void loop() {
 
 int i=0;
 int j=0;

 if(digitalRead(btn)==HIGH){ // se realiza la lectura alto o bajo del boton
 for(i=0;i<64;i++){ //comparacion limita que llegue hasta 63 porque 2^6=64
  for(j=0;j<6;j++){ //contador para las 6 columnas
    if (((i>>j)&1)==1){//se realiza la comparacion logica
      digitalWrite(salida[j],HIGH);//encendido en una posicion
      }
      else 
      digitalWrite(salida[j],LOW);// apagado en una posicion
    }
    delay(500);
  }
  
 }

}
