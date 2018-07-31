# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'cal_gui.ui'
#
# Created by: PyQt5 UI code generator 5.11.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Calculator(object):
    def setupUi(self, Calculator):
        Calculator.setObjectName("Calculator")
        Calculator.resize(400, 200)
        self.centralwidget = QtWidgets.QWidget(Calculator)
        self.centralwidget.setObjectName("centralwidget")
        self.horizontalLayoutWidget = QtWidgets.QWidget(self.centralwidget)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(20, 19, 351, 71))
        self.horizontalLayoutWidget.setObjectName("horizontalLayoutWidget")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout_2.setSizeConstraint(QtWidgets.QLayout.SetDefaultConstraint)
        self.horizontalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.input1 = QtWidgets.QLineEdit(self.horizontalLayoutWidget)
        self.input1.setObjectName("input1")
        self.horizontalLayout_2.addWidget(self.input1)
        self.comboBox = QtWidgets.QComboBox(self.horizontalLayoutWidget)
        self.comboBox.setObjectName("comboBox")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.horizontalLayout_2.addWidget(self.comboBox)
        self.input2 = QtWidgets.QLineEdit(self.horizontalLayoutWidget)
        self.input2.setObjectName("input2")
        self.horizontalLayout_2.addWidget(self.input2)
        self.label = QtWidgets.QLabel(self.horizontalLayoutWidget)
        self.label.setObjectName("label")
        self.horizontalLayout_2.addWidget(self.label)
        self.result = QtWidgets.QLineEdit(self.horizontalLayoutWidget)
        self.result.setReadOnly(True)
        self.result.setObjectName("result")
        self.horizontalLayout_2.addWidget(self.result)
        self.horizontalLayoutWidget_2 = QtWidgets.QWidget(self.centralwidget)
        self.horizontalLayoutWidget_2.setGeometry(QtCore.QRect(20, 100, 351, 41))
        self.horizontalLayoutWidget_2.setObjectName("horizontalLayoutWidget_2")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_2)
        self.horizontalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.clear_button = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.clear_button.setObjectName("clear_button")
        self.horizontalLayout_3.addWidget(self.clear_button)
        self.calculate_button = QtWidgets.QPushButton(self.horizontalLayoutWidget_2)
        self.calculate_button.setObjectName("calculate_button")
        self.horizontalLayout_3.addWidget(self.calculate_button)
        Calculator.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(Calculator)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 400, 21))
        self.menubar.setObjectName("menubar")
        Calculator.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(Calculator)
        self.statusbar.setObjectName("statusbar")
        Calculator.setStatusBar(self.statusbar)

        self.retranslateUi(Calculator)
        self.clear_button.clicked.connect(self.input1.clear)
        self.clear_button.clicked.connect(self.result.clear)
        self.clear_button.clicked.connect(self.input2.clear)
        QtCore.QMetaObject.connectSlotsByName(Calculator)

    def retranslateUi(self, Calculator):
        _translate = QtCore.QCoreApplication.translate
        Calculator.setWindowTitle(_translate("Calculator", "Calculator"))
        self.comboBox.setItemText(0, _translate("Calculator", "+"))
        self.comboBox.setItemText(1, _translate("Calculator", "-"))
        self.comboBox.setItemText(2, _translate("Calculator", "*"))
        self.comboBox.setItemText(3, _translate("Calculator", "/"))
        self.label.setText(_translate("Calculator", "="))
        self.clear_button.setText(_translate("Calculator", "Clear"))
        self.calculate_button.setText(_translate("Calculator", "Calculate"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Calculator = QtWidgets.QMainWindow()
    ui = Ui_Calculator()
    ui.setupUi(Calculator)
    Calculator.show()
    sys.exit(app.exec_())

