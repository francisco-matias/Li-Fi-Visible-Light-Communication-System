// sketch for PCM modulation
int a[] = { 1, 0, 1, 1, 1, 0, 0, 1};

void setup()
{
    pinMode(5, OUTPUT);
    Serial.begin(9600); // Initialize serial communication
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        if (a[i] == 1)
        {
            digitalWrite(5, HIGH); // sets the digital pin 5 on
            delay(250);
        } 
        else 
        {
            digitalWrite(5, LOW); // sets the digital pin 5 off
            delay(250);
        }
    }
}

void loop() 
{
// Loop function is intentionally left empty
}