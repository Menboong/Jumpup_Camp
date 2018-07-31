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
        self.show()        
    def close_app(self):
        choice = QtWidgets.QMessageBox.question(self, 'Extract!',
                                                "종료하시겠습니까?", QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No)
        if choice==QtWidgets.QMessageBox.Yes:
            print ('exit')
            sys.exit()

        else:
            pass


app=QtWidgets.QApplication(sys.argv)
GUI = Window()
sys.exit(app.exec_())

