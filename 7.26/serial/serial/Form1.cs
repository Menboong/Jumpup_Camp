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
        string rxD;
        int time=0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == false) serialPort1.Open();
            if (serialPort1.IsOpen == true)
            {
                button1.BackColor = Color.GreenYellow;
                timer1.Enabled = true;
            }
            else button1.BackColor = Color.Red;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("31");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("20");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            serialPort1.Write("39");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            serialPort1.Write("23");
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            rxD = serialPort1.ReadExisting();
            time++;
            if (rxD != "")
            {
                if (time > 1)
                {
                    label3.Text = rxD;
                    progressBar1.Value = Convert.ToInt32(rxD);
                } 
            }
        }

        private void progressBar1_Click(object sender, EventArgs e)
        {

        }
    }
}
