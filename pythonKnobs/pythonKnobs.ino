// pythonKnobs.ino

void setup() {
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
}

