using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Media;
using System.Windows.Forms;



namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        int time = 1;
        int pro;
        int ck = 0;
        SoundPlayer sp = new SoundPlayer("D:\\mario.wav");
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;

            A1.Visible = true;
            A2.Visible = true;
            A3.Visible = true;
            A4.Visible = true;
            A5.Visible = true;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (time <= 10) pro++;
            time++;
            progressBar1.Value = pro;
            if (ck == 4)
            {
                timer1.Enabled = false;
            }
            if (time > 11)
            {
                timer1.Enabled = false;
                pictureBox1.Load(@"D:\bomb.jpg");
                sp.Play();
            }
        }

        private void progressBar1_Click(object sender, EventArgs e)
        {

        }

        private void A1_Click(object sender, EventArgs e)
        {
            ck++;
            A1.Visible = false;
        }

        private void A2_Click(object sender, EventArgs e)
        {
            if (ck == 1)
            {
                ck++;
                A2.Visible = false;
            }
        }

        private void A3_Click(object sender, EventArgs e)
        {
            if (ck == 2)
            {
                ck++;
                A3.Visible = false;
            }
        }

        private void A4_Click(object sender, EventArgs e)
        {
            if (ck == 3)
            {
                ck++;
                A4.Visible = false;
            }
        }

        private void A5_Click(object sender, EventArgs e)
        {
            if (ck == 4)
            {
                ck++;
                A5.Visible = false;
            }
        }
    }
}
