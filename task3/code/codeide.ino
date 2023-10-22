void setup() {
  // put your setup code here, to run once:
int PinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for(int x=0;x<=255;x++)
{
analogWrite(9, x);
  delay(100);
}
}
