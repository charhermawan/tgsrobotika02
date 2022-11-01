
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

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
  dance(2,led1,500);
  dance(1,led3,100);
  dance(2,led5,100);
  dance(3,led7,100);
  dance(2,led8,100);
  dance(1,led6,100);
  dance(2,led4,100);
  dance(3,led2,500);

}

void dance (int batas, int led, int lama){

	for(int i=1; i <=batas; i++ ){
		digitalWrite(led, HIGH);
		delay(lama);
		digitalWrite(led, LOW);
		delay(lama);
	}

}
