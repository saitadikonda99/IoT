int redled = 3;
int greenled = 2;
int buz =4;
int Sensor = A0;

void setup() {

        pinMode( redled, OUTPUT );
        pinMode( greenled, OUTPUT );
        pinMode( buz, OUTPUT );
        pinMode( Sensor, INPUT );
        Serial.begin(9600);
}

void loop() {

        int sensValue = analogRead( Sensor );
        Serial.println(sensValue);
  if( sensValue > 150 ) {

        digitalWrite( redled, HIGH );
        tone( buz, 10000, 10);
        digitalWrite( greenled, LOW );
        }
        else {
        digitalWrite( greenled, HIGH );
        noTone( buz );
        digitalWrite( redled, LOW );
        }
   }

