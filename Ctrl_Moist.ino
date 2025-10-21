void setup () {
	pinMode(0, INPUT);
	pinMode(2, OUTPUT);
	pinMode(1, INPUT);
	pinMode(3, OUTPUT);
	pinMode(13, OUTPUT);

}

void loop(){
	if ((analogRead(0)>400)){
		digitalWrite(2,false);
		delay(2*1000);
	}

	else {
		digitalWrite(2, true);
		delay(2*1000);
	}

	if((analogRead(1)>400)){
		digitalWrite(3, false);
	}

	else{
		delay(2*1000);
`		digitalWrite(13, true);
		delay(2*1000);
	}
}