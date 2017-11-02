const int PIN_ANA = A0;

int BatteryValue = 0;
float outputValue = 0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  BatteryValue = analogRead(PIN_ANA);
  outputValue = (float(BatteryValue)*5)/1023*2;
  
  Serial.print("Analog value = ");
  Serial.print(BatteryValue);
  Serial.print("\t voltage = ");
  Serial.print(outputValue);
  Serial.print("V \n");

  delay(500);
}
