import sys
from PyQt5 import QtCore, QtGui, QtWidgets
import serial
from SMART_FARM_TEST_gui import *
import threading

ser = serial.Serial(port='COM24',baudrate=115200,parity=serial.PARITY_NONE,stopbits=serial.STOPBITS_ONE,bytesize=serial.EIGHTBITS,timeout=1)
def signals(self):
	self.LED1BUTTON.clicked.connect(self.send_data)
	self.LED2BUTTON.clicked.connect(self.send_data)
	self.LED3BUTTON.clicked.connect(self.send_data)
	self.DOORBUTTON.clicked.connect(self.send_data)
	print('connect')

def send_data(self):
	SendData = self.sendEdit.text()	
	ser.write(bytes(SendData.encode()))