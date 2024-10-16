#define led_r 6
#define led_y 5
#define led_g 4

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(led_y, OUTPUT);
  pinMode(led_g, OUTPUT);


}

void loop()
{
  digitalWrite(led_r, HIGH);
  digitalWrite(led_y, LOW);
  digitalWrite(led_g, LOW);
  delay(500);
  digitalWrite(led_r, LOW);
  digitalWrite(led_y, HIGH);
  digitalWrite(led_g, LOW);
  delay(500);
  digitalWrite(led_r, LOW);
  digitalWrite(led_y, LOW);
  digitalWrite(led_g, HIGH);
  delay(500);
}