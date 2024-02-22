
// ------------- INITIALIZING ------------- //
void setup() {
  // put your setup code here, to run once:

  // Add pin setups

  // Speakers
    pinMode(9, OUTPUT);
    // GND

  // Joystick
    pinMode(A5, INPUT);
    pinMode(A4, INPUT);

    // GND
    // +5 V


  // Button
    pinMode(2, INPUT);
    // Voltage
    // GND


  // Slider
    pinMode(A3, INPUT);
    // Voltage
    // GND


  // LCD display
    // GND to ground pin
    // VSS to power pin 
    // SDA
    pinMode(A2, INPUT)
    // SCL




}


// --------------- FUNCTIONS --------------- //
int randomNumberGenerator(){
  int val = random(1, 3);

  return val;

}

/*
  The audioOutput() function takes in an integer from 1-3 depending on which task is called.
  From there it retrieves and decodes the appropriate audio file from the micro SD.
  It finally outputs the retrieved sound.
*/
audioOutput(int){

}

/*
  The displayWin() function takes no inputs and returns no outputs.
  It diplays the win screen.
*/
displayWin(){

}

/*
  Similar to displayWin(), the displayLoss() function takes no inputs or outputs.
  It displays the loss screen.

*/
displayLoss(){

}

/*
  The updateScore() function is used to update the score shown on the LCD.
  The score will always be displayed.
*/
updateScore(){

}

/*
  The startMenu() function takes no inputs and returns no outputs.
  It diplays a set of instructions and a welcome page on the LCD to initialize the game.
*/
displayStartMenu(){


}

/*
  The displayGrading() function shows if the user successfully completed the task or not.
  It will light up either a red or green LED.
*/
displayGrading(){

}



// ----------------- MAIN ----------------- //
void loop() {
  // put your main code here, to run repeatedly:


  while(lose != 1){

    displayScore();
    rndTask = randomNumberGenerator();

    // Switch statement for each task
    switch(){

      case 1: 

        break;

      case 2: 

        break;

      default:

    }


    // Get the current standard time at beginning of operation
    unsigned long startTime = millis();

    // Read input for action the user takes


    // Get the current standard time at the end of operation
    unsigned long endTime = millis();

    // Comparing start and ending times to test if task was completed on time
    if((endTime - startTime) > 5){
      diplayLoss();
      delay(3000);
      displayStartMenu();
    }





  }



}
