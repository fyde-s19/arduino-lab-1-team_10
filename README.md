# arduino-lab-1-team_10
arduino-lab-1-team_10 created by GitHub Classroom


Questions: 

1.) Why do embedded systems need a setup and a loop?

  Setup is necessary to initialize everything and to also set initial values, the loop is the actual code that will be executed over and   over again, this code is used to actually control the embedded system.

2.) Why does our code need to be compiled?


  Since we code in C the code needs to be compiled into a machine language in order for the CPU to process the code correctly. Without doing so the code will not be interpreted correctly and a number of errors will occur.
  
3.) When lowering the frequency in step four, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

Lowering the frequency causes a rapid flash on and off of the LED, since our eyes can see the changes of the led. The solution we thought of, and what more than likely is done in the real world for a smooth dimming is not altering the frequency when changing the duty cycle so the LED gets dimmer without our eyes catching any of the flashes that are brought on by a low frequency.


