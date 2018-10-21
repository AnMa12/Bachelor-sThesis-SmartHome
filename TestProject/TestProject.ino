// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       TestProject.ino
    Created:	10/21/2018 2:42:48 PM
    Author:     DESKTOP-JT7AN8K\Sclav
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
	// declare pin 9 to be an output:
	pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
	// set the brightness of pin 9:
	analogWrite(led, brightness);

	// change the brightness for next time through the loop:
	brightness = brightness + fadeAmount;

	// reverse the direction of the fading at the ends of the fade:
	if (brightness <= 0 || brightness >= 255) {
		fadeAmount = -fadeAmount;
	}
	// wait for 30 milliseconds to see the dimming effect
	delay(30);
}
