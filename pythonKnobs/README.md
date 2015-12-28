Hey there, how's it going.....


# knobs, pythonKnobs
 are the bash files for calling for the knob values (0 - 1023).
 Needs changes for each setup.  (hardwired directories)

#pythonKnobs.py 
	is used to read from the arduino
	Works only with linux right now but other wise general.

#pythonKnobs.ino
	arduino code. in working order. Right now occasionally calls to knobs will return inconsitent values. every ~10th call will yield a zero when the values should be nonzero. maybe this is a wiring problem