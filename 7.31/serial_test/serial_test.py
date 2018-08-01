import sys
from PyQt5 import QtCore, QtGui, QtWidgets
import serial
from ser_gui import *
import threading


ser = serial.Serial(port='COM24',baudrate=115200,parity=serial.PARITY_NONE,stopbits=serial.STOPBITS_ONE,bytesize=serial.EIGHTBITS,timeout=1)
def signals(self):
	self.sendButton.clicked.connect(self.send_data)
	print('connect')

def send_data(self):
	SendData = self.sendEdit.text()	
	ser.write(bytes(SendData.encode()))

def display_data(self):
	while True:      
		rxdata = ser.readline().decode('utf-8')
		self.rxdata=rxdata
		if rxdata :
			print(rxdata)
		#	Ui_MainWindow.rxBrowser.append(self.rxdata)

	

Ui_MainWindow.signals = signals
Ui_MainWindow.send_data = send_data
Ui_MainWindow.display_data = display_data	

if __name__=="__main__":
	import sys
	app = QtWidgets.QApplication(sys.argv)

	MainWindow = QtWidgets.QMainWindow()
	ui = Ui_MainWindow()
	ui.setupUi(MainWindow)
	ui.signals()
	MainWindow.show()
	thread = threading.Thread(target=display_data, args=(ser,))
	thread.start()

	sys.exit(app.exec_())