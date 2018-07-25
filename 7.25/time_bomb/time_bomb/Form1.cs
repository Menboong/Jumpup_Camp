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
        SoundPlayer sp = new SoundPlayer("D:\\mario.wav");
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (time <= 10) pro++;
            time++;
            progressBar1.Value = pro;
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
    }
}
