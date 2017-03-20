/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                Cruilla de semafors - Prog. 1                **
**                                                             **
**   NOM: Marc Simats                         Data:13/03/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

const int semaforAR = 7;          // donar nom al pin 7 de l’Arduino
const int semaforAT = 8;          // donar nom al pin 8 de l’Arduino
const int semaforAV = 9;          // donar nom al pin 9 de l’Arduino
const int semaforBR = 10;         // donar nom al pin 10 de l’Arduino
const int semaforBT = 11;         // donar nom al pin 11 de l’Arduino
const int semaforBV = 12;         // donar nom al pin 12 de l’Arduino
int a = 100;                  // definir variable de temps en ms

//*************************** SETUP *****************************

void setup()
{
  pinMode(semaforAR, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(semaforAT, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(semaforAV, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(semaforBR, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(semaforBT, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(semaforBV, OUTPUT);     // definir el pin 12 com una sortida
  
  digitalWrite(semaforAR, HIGH);    // posar a 5V el pin 7
  digitalWrite(semaforAT, LOW);     // posar a 0V el pin 8
  digitalWrite(semaforAV, LOW);     // posar a 0V el pin 9
  digitalWrite(semaforBR, HIGH);    // posar a 5V el pin 10
  digitalWrite(semaforBT, LOW);     // posar a 0V el pin 11
  digitalWrite(semaforBV, LOW);      // posar a 0V el pin 12  
  
  delay(a);                     // es queden leds pausa ms en aquest estat
}

//*************************** LOOP ******************************

void loop()
{
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B
  
  delay(5*a);                   // es queden leds 4*pausa ms en aquest estat

  digitalWrite(semaforBR, LOW);    // s'apaga roig semàfor B
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBV, HIGH);    // encén verd semàfor B
  
  delay(5*a);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBV, HIGH);    // encén verd semàfor B
   
  delay(5*a);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBV, HIGH);    // encén verd semàfor B
  
  delay(5*a);                   // es queden leds 4*pausa ms en aquest estat
  
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBV, HIGH);    // encén verd semàfor B
  
  delay(5*a);                     // es queden leds pausa ms en aquest estat

  digitalWrite(semaforBV, LOW);    // s'apaga verd semàfor B
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBT, HIGH);    // encén taronja semàfor B
  
  delay(5*a);                     // es queden leds pausa ms en aquest estat

  digitalWrite(semaforBT, LOW);    // s'apaga taronja semàfor B
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);
  
  digitalWrite(semaforAR, LOW);    // s'apaga roig semàfor A  
  digitalWrite(semaforAV, HIGH);     // encén verd semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);

  digitalWrite(semaforAV, HIGH);     // encén verd semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);

  digitalWrite(semaforAV, HIGH);     // encén verd semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);

  digitalWrite(semaforAV, HIGH);     // encén verd semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);

  digitalWrite(semaforAV, LOW);    // s'apaga verd semàfor A 
  digitalWrite(semaforAT, HIGH);     // encén taronja semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);

  digitalWrite(semaforAT, LOW);    // s'apaga taronja semàfor A 
  digitalWrite(semaforAR, HIGH);     // encén roig semàfor A
  digitalWrite(semaforBR, HIGH);    // encén roig semàfor B

  delay(5*a);
}

//************************ FUNCIONS *****************************
