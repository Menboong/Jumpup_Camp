# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'pikachu.ui'
#
# Created by: PyQt5 UI code generator 5.11.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(231, 260)
        MainWindow.setStyleSheet("background-image:url(:/test-image/image/pi.jpg)")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.BUTTON = QtWidgets.QPushButton(self.centralwidget)
        self.BUTTON.setGeometry(QtCore.QRect(10, 200, 75, 23))
        self.BUTTON.setStyleSheet("QPushButton#BUTTON {\n"
"    font: 75 10pt \"Arial\";\n"
"    color: white;\n"
"    background : rgb(83, 255, 57);\n"
"}\n"
"QPushButton#BUTTON:pressed {\n"
"    font: 75 10pt \"Arial\";\n"
"    color: white;\n"
"    background : rgb(255, 136, 16);\n"
"}")
        self.BUTTON.setObjectName("BUTTON")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 231, 21))
        self.menubar.setObjectName("menubar")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.BUTTON.setText(_translate("MainWindow", "툭..."))

import test_image_rc

if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

