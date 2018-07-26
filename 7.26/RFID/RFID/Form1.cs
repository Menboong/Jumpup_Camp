using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace RFID
{
    public partial class Form1 : Form
    {
        string rxD;
        int rx;
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == true)
            {
                button1.BackColor = Color.GreenYellow;
                timer1.Enabled = true;
            }
            else
            {  
                serialPort1.Open();
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            rxD = serialPort1.ReadExisting();

            if (rxD != "")
            {
                rx = Convert.ToInt32(rxD);

                if (rx == 1)
                {
                    label2.Text = "key";
                }
                else if (rx == 2)
                {
                    label2.Text = "card";
                }
            }
        }
    }
}
