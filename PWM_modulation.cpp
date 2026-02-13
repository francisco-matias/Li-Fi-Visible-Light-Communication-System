// sketch for PWM modulation
int a[] = {1, 0, 1, 1, 0, 1};

void setup()
{
    pinMode(9, OUTPUT); // Configure pin 13 as an output
    //pinMode(LED_BUILTIN, OUTPUT); // Configure the built-in LED pin as an output

    Serial.begin(9600); // Initialize serial communication
 }

 void loop()
 {
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        //Serial.print("a[i] = ");
        if (a[i] == 1)
        {
            Serial.println(1);
            digitalWrite(9, HIGH); // sets the digital pin 13 on
            delay(62.5);
            digitalWrite(9, LOW);
            delay(600);
        } 
        else 
        {
            digitalWrite(9, HIGH);
            delay(37.5);
            digitalWrite(9, LOW);
            delay(600);
        }
    }
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on
    delay(500); // wait for half a second
    digitalWrite(LED_BUILTIN, LOW); // turn the LED off
    delay(500);
 }