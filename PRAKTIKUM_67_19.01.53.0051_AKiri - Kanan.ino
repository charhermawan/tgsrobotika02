
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int X = 100;

void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
	pinMode(led5, OUTPUT);
	pinMode(led6, OUTPUT);
	pinMode(led7, OUTPUT);
	pinMode(led8, OUTPUT);
}

void loop()
{

	digitalWrite(led8, HIGH);
	delay(X);
	digitalWrite(led8, LOW);
	digitalWrite(led7, HIGH);
	delay(X);
	digitalWrite(led7, LOW);
	digitalWrite(led6, HIGH);
	delay(X);
	digitalWrite(led6, LOW);
	digitalWrite(led5, HIGH);
	delay(X);
	digitalWrite(led5, LOW);
	digitalWrite(led4, HIGH);
	delay(X);
	digitalWrite(led4, LOW);
	digitalWrite(led3, HIGH);
	delay(X);
	digitalWrite(led3, LOW);
	digitalWrite(led2, HIGH);
	delay(X);
	digitalWrite(led2, LOW);
	digitalWrite(led1, HIGH);
	delay(X);
	digitalWrite(led1, LOW);
	digitalWrite(led2, HIGH);
	delay(X);
	digitalWrite(led2, LOW);
	digitalWrite(led3, HIGH);
	delay(X);
	digitalWrite(led3, LOW);
	digitalWrite(led4, HIGH);
	delay(X);
	digitalWrite(led4, LOW);
	digitalWrite(led5, HIGH);
	delay(X);
	digitalWrite(led5, LOW);
	digitalWrite(led6, HIGH);
	delay(X);
	digitalWrite(led6, LOW);
	digitalWrite(led7, HIGH);
	delay(X);
	digitalWrite(led7, LOW);
	digitalWrite(led8, HIGH);
	delay(X);
	digitalWrite(led8, LOW);

}

