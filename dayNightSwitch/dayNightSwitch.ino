
// Digital Ports
int mRelayPort = 2; // Port for a mechanical relay
int ssRelayPort = 3; // Port for a solid state relay

// Analog ports
int photoResistor = 0; // Photoresistor for sensing the amount of light
int lightTresholdPot = 1; // Potmeter for adjusting the on/off threshold
int onTimePot = 2; // Potmeter to adjust the ON time

// Timer variables
unsigned long currentMillis = 0; // used for storing the current milliseconds
unsigned long oldMillis = 0; // used for storing milliseconds from the millis() function to compare time

int timer;

// Tresholds
int onOffTreshold;

int photoResistorValue;

void setup() {
  // Setting the relay ports to output
  pinMode(mRelayPort, OUTPUT);
  pinMode(ssRelayPort, OUTPUT);

}

void loop() {

  currentMillis = millis();

  photoResistorValue = analogRead(photoResistor);  // store the photoresistor value

  if(photoResistorValue < onOffTreshold)
  {
    
  }


  
  
  
  int fallback = 255;


  

}
