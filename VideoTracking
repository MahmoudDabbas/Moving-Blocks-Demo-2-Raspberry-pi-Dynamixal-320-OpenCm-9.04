import numpy as np
import cv2
import time
import serial
SerialPort="/dev/video0"

cap = cv2.VideoCapture(0)
while(True):

    	#Capture frame-by-frame
	ret, frame = cap.read()
	#Display the resulting frame
	#Convert BGR to HSV
	hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
	#print "hsv = ", hsv
	#define range of blue color in HSV
	lower_blue = np.array([110, 50, 50], dtype=np.uint8)
	upper_blue = np.array([130,255,255], dtype=np.uint8)
	#Threshold the HSV image to get only blue colors
   	mask = cv2.inRange(hsv, lower_blue, upper_blue)
	print "mask = " , mask
	#time.sleep(1)
    	height, width = mask.shape
    	height2 = len(mask)
    	width2 	= len(mask[0])
	print height, width
	print height2, width2
	#print mask
	#Bitwise-AND mask and original image
	#res = cv2.bitwise_and(frame,frame, mask= mask)
	#heightmask, widthmask, depthmask = res.shape
	#print "height2= ",heightmask, width, depth
	#print res	 
	x=0
	y=0
	centerx=1
	centery=1
	counter=1
	print "aaaaaaaaaaaaaaaaaaaaaaaaaaa"
	#time.sleep(3)	
	for y in range(0,height):
		for x in range(width):
			if mask[y][x] !=0:
				centerx=centerx+x
				centery=centery+y
				counter=counter+1
				#print x,y
				#time.sleep(.1)
				#print "fsdafjkashkjfhakjsdhfkjasdfbakjsbdflkjaslkdj"
	cv2.imshow('frame',frame)
	cv2.imshow('mask',mask)
	#cv2.imshow('res',res)
	#time.sleep(1)
	print centerx,centery
	centerx=centerx/counter#(width*height)
	centery=centery/counter#(width*height)
	print centerx,centery
	time.sleep(1)
	cv2.rectangle(mask, (max(0,centerx-50), max(0,centery-50)), (min(width,centerx+50), min(height,centery+50)), (95, 99, 159), 1)
	cv2.imshow('mask',mask)
	#cv2.waitKey()
	SP=serial.Serial(SerialPort,9600)
	centerx_to_string=str(xa)
	sP.write(centerx_to_string)

	#cv2.imshow('frame',frame)
	if cv2.waitKey(1) & 0xFF == ord('q'):
		break
