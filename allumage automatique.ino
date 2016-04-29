const int relais = 0; // la LED est liée à la broche digitale 2
float capteur = 3; // la photoresistance est sur la broche 3
int capteurreading; 
void setup() {
  // put your setup code here, to run once:
 pinMode(relais, OUTPUT); // configurer la broche comme sortie
  
}

void loop() {
  // put your main code here, to run repeatedly:

 capteurreading =analogRead(capteur); 



  if (capteurreading<100)
  {
    digitalWrite(relais,HIGH);
    }
      
  else{ // si non (il ya de la lumière)
    digitalWrite(relais,LOW); // éteindre la LED
    
  }
  } 