# Arduino-basic-project
button to control 3 options in arduino circuit

the code and the circuit pins for the arduino have been uploaded...

initially variable device is set to 2, whose remainder when taken from 3 will return 2.
this will cause the LEDs connected to pin 13 to light up for one second
>after this there is a 2.5 second pause, and you are to press and hold down the button in this interval( if you wish to)

if you do not press,the process of lines 7 and 8 is repeated
if you do press, the device value is incremented by 1, now it is 3 , leaving remainder 0 by 3, 
this will make the serial prompt you for an integer value between 0 and 180 degrees, only after the servo has returned to zero(degrees)
then the servo will rotate by that number of degrees and stay.

>after this there is a 2.5 second pause, and you are to press and hold down the button in this interval( if you wish to)

now the device is incremented by one becoming 4, leaving remainder 1,
this makes the servo slowly rotate from 0 to 180 and back to 0.

>after this there is a 2.5 second pause, and you are to press and hold down the button in this interval( if you wish to)


throught the loop the variable device will take values of form 
> 3k -> this will trigger the serial degree input to the servo

> 3k + 1 -> this will trigger the slow full extent rotation of the servo

> 3k + 2 -> this will make the LEDs light up 
