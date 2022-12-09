int sensor_pin = A0;
int relay_pin = 7;

int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");
  pinMode(relay_pin,OUTPUT);
  

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);

   output_value = map(output_value,550,0,0,100);
if(output_value<30){
 
  digitalWrite( relay_pin,HIGH);
  }
  else{
     digitalWrite( relay_pin,LOW);
    }
   Serial.print("Mositure : ");

   Serial.print(output_value);

   Serial.println("%");

   delay(1000);

   }
