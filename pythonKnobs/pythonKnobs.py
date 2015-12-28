import serial	#uses pySerial;
import glob

portN = glob.glob('/dev/ttyACM*')
portN = portN[0]

ser = serial.Serial(portN,9600,timeout=1)

knobs = [0,0,0,0,0];
i = 0
while i != 5:
	line = ser.readline();
	while len(line) < 2:
		continue
	knobs[int(line[0])-1] = line[1:];
	print int(knobs[i]),
	print ' ',
	i += 1;