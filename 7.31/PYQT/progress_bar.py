import sys
from PyQt5 import QtCore, QtGui, QtWidgets

class Window(QtWidgets.QMainWindow):
    def __init__(self):
        super(Window, self).__init__()
        self.setGeometry(50, 50, 300, 300)
        self.setWindowTitle('PyQt5')
        self.setWindowIcon(QtGui.QIcon('image/fight.jpg'))
        extractAction = QtWidgets.QAction("&CLOSE", self)
        extractAction.setShortcut("Ctrl+Q")
        extractAction.setStatusTip('Leave the App')
        extractAction.triggered.connect(self.close_app)
        self.statusBar()
        mainMenu = self.menuBar()
        fileMenu=mainMenu.addMenu('&File')
        fileMenu.addAction(extractAction)        
        self.home()
    def home(self):
        btn=QtWidgets.QPushButton('Quit', self)
        btn.clicked.connect(self.close_app)
        btn.resize(btn.sizeHint())
        btn.move(100, 100)
        checkBox = QtWidgets.QCheckBox('Enlarge Window', self)
        checkBox.move(100, 25)
        checkBox.stateChanged.connect(self.enlarge_Window)
        self.progress = QtWidgets.QProgressBar(self)
        self.progress.setGeometry(200, 80, 250, 20)
        self.btn = QtWidgets.QPushButton("Download", self)
        self.btn.move(200, 120)
        self.btn.clicked.connect(self.download)
        self.show()
        
    def enlarge_Window(self, state):
        print('check box')
        if state == QtCore.Qt.Checked:
            print ('checked')
            self.setGeometry(50, 50, 600, 600)
        else:
            print ('not checked')
            self.setGeometry(50, 50, 300, 300)        
    def close_app(self):
        choice = QtWidgets.QMessageBox.question(self, 'Extract!',
                                                "종료하시겠습니까?", QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No)
        if choice==QtWidgets.QMessageBox.Yes:
            print ('exit')
            sys.exit()

        else:
            pass

    def download(self):
        self.completed=0
        while self.completed < 100:
            self.completed += 0.00001
            self.progress.setValue(self.completed)




app=QtWidgets.QApplication(sys.argv)
GUI = Window()
sys.exit(app.exec_())

