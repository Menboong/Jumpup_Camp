from cal_gui import *
def signals(self):
    self.calculate_button.clicked.connect(self.calc)
def calc(self):
    a = self.input1.text()
    b = self.input2.text()
    operator = self.comboBox.currentText()

    try:
        c=eval(a + operator + b)
        self.result.setText(str(c))
    except:
        QtWidgets.QMessageBox.critical(MainWindow, 'Error', 'Invalid inputs!', QtWidgets.QMessageBox.Ok)
Ui_Calculator.signals = signals
Ui_Calculator.calc = calc
if __name__=="__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)

    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_Calculator()
    ui.setupUi(MainWindow)
    ui.signals()
    MainWindow.show()
    sys.exit(app.exec_())
