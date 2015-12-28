// pythonKnobs.ino

void setup() {
	Serial.begin(9600);

	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
	pinMode(A4, INPUT);
	pinMode(A5, INPUT);
}

void loop() {
int knob1 = 0, knob2 = 0, knob3 = 0, knob4 = 0,knob5 = 0;

knob1 = analogRead(A0);
knob2 = analogRead(A1);
knob3 = analogRead(A2);
//A3 not connected
knob4 = analogRead(A4);
knob5 = analogRead(A5);

Serial.write("1%4d\n",knob1);
Serial.write("2%4d\n",knob2);
Serial.write("3%4d\n",knob3);
Serial.write("4%4d\n",knob4);
Serial.write("5%4d\n",knob5);
}

