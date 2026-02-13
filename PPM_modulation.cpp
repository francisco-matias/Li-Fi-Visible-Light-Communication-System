// sketch for PPM modulation
 int a[] = { 0, 1, 0, 1, 0};

 void setup()
 {
    pinMode(5, OUTPUT); // Configure pin 5 as an output
    //pinMode(LED_BUILTIN, OUTPUT); // Configure the built-in LED pin as an output

    Serial.begin(9600); // Initialize serial communication
 }

 void loop()
 {
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (a[i] == 1) 
        {
            digitalWrite(5, HIGH);
            delay(10);
            Serial.println(1);
            delay(10);
            Serial.println(1);
            delay(10);
            digitalWrite(5, LOW);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            digitalWrite(5, HIGH);
            delay(10);
            Serial.println(1);
            delay(10);
            Serial.println(1);
            delay(10);
            digitalWrite(5, LOW);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
        } 
        else 
        {
            digitalWrite(5, HIGH);
            delay(10);
            Serial.println(1);
            delay(10);
            Serial.println(1);
            delay(10);
            digitalWrite(5, LOW);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            digitalWrite(5, HIGH);
            delay(10);
            Serial.println(1);
            delay(10);
            Serial.println(1);
            delay(10);
            digitalWrite(5, LOW);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
            Serial.println(0);
            delay(10);
        }
    }
}