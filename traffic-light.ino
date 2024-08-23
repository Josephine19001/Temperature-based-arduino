const int redLED = 8;

const int yellowLED = 10;

const int greenLED = 12;



void setup() {

  // put your setup code here, to run once:

  pinMode(redLED, OUTPUT);

  pinMode(yellowLED, OUTPUT);

  pinMode(greenLED, OUTPUT);

}



void loop() {

  digitalWrite(redLED, HIGH); // turn on red for 3 sec

  delay(3000);  

  digitalWrite(yellowLED, HIGH); // turn on yellow for 1 sec

  delay(1000); 



  digitalWrite(redLED, LOW); // turn off red

  digitalWrite(yellowLED, LOW); // turn off yellow



  digitalWrite(greenLED, HIGH); // turn on red for 3 sec

  delay(3000);  

  digitalWrite(greenLED, LOW); // turn off green

  delay(500); 





  // BLINK

  digitalWrite(greenLED, HIGH); // turn on green for .5 sec --- 1

  delay(500);  

  digitalWrite(greenLED, LOW); 

  delay(500);  



  digitalWrite(greenLED, HIGH); // turn on green for .5 sec --- 2

  delay(500);  

  digitalWrite(greenLED, LOW); 

  delay(500); 



  digitalWrite(greenLED, HIGH); // turn on green for .5 sec --- 3

  delay(500);  

  digitalWrite(greenLED, LOW); 

  delay(500); 

}
