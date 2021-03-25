//Motor A
int enA = 9;
int in1 = 8;
int in2 = 7;

//MotorB
int enB = 3;
int in3 = 5;
int in4 = 4;


// MOVE THIS
void setup() {
 //set control pins to output
 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);

 //initial state: motors off
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW);

}

// CHANGE THIS
void loop() {
 // put your main code here, to run repeatedly:

 //testing functions every 5 seconds
 forward();
 delay(5000);
 reverse();
 delay(5000);
 turnClockwise();
 delay(5000);
 turnCounterClockwise();
 delay(5000);
 changeSpeeds();
 delay(5000);
 
 
}

//turn motors off
void turnOff() {
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW);
}

//turns motors forward
void forward() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn on motors forward
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

 delay(5000);
 turnOff();  // might not need this for forward
}

//reverse motors
void reverse() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn on motors reverse
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);

 delay(5000);
 turnOff();
}

void turnClockwise() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn motor A reverse, turn motor B forward
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

 delay(5000);
 turnOff();
}

void turnCounterClockwise() {
 //set max speed
 analogWrite(enA, 255);
 analogWrite(enB, 255);

 //turn motor A reverse, turn motor B forward
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);

 delay(5000);
 turnOff();
}

void changeSpeeds() {
 //turn on motors forwards
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

 //accelerate from 0 to max
 for (int i = 0; i < 256, i++) {
   analogWrite(enA, i);
   analogWrite(enB, i);
   delay(20);
 }

 //decelerate from max to 0
 for (int i = 255; i >= 0; --i) {
   analogWrite(enA, i);
   analogWrite(enB, i);
   delay(20);
 }

 turnOff();
}
