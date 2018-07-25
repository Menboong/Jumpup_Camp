using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace serial
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == false) serialPort1.Open();
            if (serialPort1.IsOpen == true) button1.BackColor = Color.GreenYellow;
            else button1.BackColor = Color.Red;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("1");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("0");
        }
    }
}
