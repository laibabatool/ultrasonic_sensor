int trigger_pin = 2;

int echo_pin = 3;

int buzzer_pin = 10;

int time = 0 ;

int distance = 0 ;

void setup ( )

{

Serial.begin (9600);

pinMode (2, OUTPUT);

pinMode (3, INPUT);

pinMode (10, OUTPUT);

}

void loop ( )

{

digitalWrite (2, HIGH);

delayMicroseconds (10);

digitalWrite (2, LOW);

int time = pulseIn (3, HIGH);

int distance = (time * 0.034) / 2;

if (distance <= 500)

{

Serial.println (" Door Open ");

Serial.print (" Distance= ");

Serial.println (distance);

digitalWrite (10, HIGH);

delay (500);

}

else {

Serial.println (" Door closed ");

Serial.print (" Distance= ");

Serial.println (distance);

digitalWrite (10, LOW);

delay (500);

}

}
