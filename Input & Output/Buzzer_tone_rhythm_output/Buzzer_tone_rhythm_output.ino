// https://learn.adafruit.com/adafruit-arduino-lesson-10-making-sounds/arduino-code
// https://programmingelectronics.com/an-easy-way-to-make-noise-with-arduino-using-tone/
// https://en.wikipedia.org/wiki/List_of_intervals_in_5-limit_just_intonation


int speakerPin = 12;
int rootPitch = 880; // set initial pitch in frequency (hz)
//int barTempo = 4000; // in milliseconds! For additional challenge: try ratios of this for durations instead of writing in each duration as a number

void setup()
{
}

void loop()
{
// tone syntax w/out duration: tone(pin, frequency)
// tone syntax with duration: tone(pin, frequency, duration) duration in milliseconds!

// 1st note "do" 
  tone(speakerPin, rootPitch*1, 500); // add duration for pitch duration!
  //delay(1000); //complete throughout for rhythm!

// 2nd note "re"
  tone(speakerPin, rootPitch*9/8, 250);
  //COMPLETE HERE AND BELOW
    delay(1000); // Wait for 1000 millisecond(s)


// 3rd note "mi"
  tone(speakerPin, rootPitch*5/4, 250);
  delay(1000); // Wait for 1000 millisecond(s)
  
// 4th note "fa"
  tone(speakerPin, rootPitch*4/3, 250);
  delay(1000); // Wait for 1000 millisecond(s)

// 5th note "sol"
  tone(speakerPin, rootPitch*3/2, 250);
  delay(1000); // Wait for 1000 millisecond(s)

// 6th note "la"
  tone(speakerPin, rootPitch*5/3, 250);
  delay(1000); // Wait for 1000 millisecond(s)

// 7th note "ti"
  tone(speakerPin, rootPitch*15/8, 250);
  delay(1000); // Wait for 1000 millisecond(s)

// octave "do"
  tone(speakerPin, rootPitch*2/1, 250);
  delay(1000); // Wait for 1000 millisecond(s)

}
