using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Media;
using System.Windows.Forms;

namespace catch_me_if_you_can
{
    public partial class Form1 : Form
    {
        int time = 0;
        int score = 0;
        SoundPlayer sp = new SoundPlayer("D:\\FIGHT.wav");
        public Form1()
        {
            InitializeComponent();
        }

        private void button10_Click(object sender, EventArgs e)
        {
            sp.Play();
            time = 0;
            score = 0;
            timer1.Enabled = true;
            stime.Enabled = true;
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = false;
            button5.Visible = false;
            button6.Visible = false;
            button7.Visible = false;
            button8.Visible = false;
            button9.Visible = false;

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            time++;
            label3.Text = (Convert.ToString(time));
            if(time >60)
            {
                sp.Stop();
                timer1.Enabled = false;
                stime.Enabled = false;
            }
        }

        private void stime_Tick(object sender, EventArgs e)
        {
            if(time<=15)
            {
                stime.Interval = 900;
            }
            else if(time <=30)
            {
                stime.Interval = 700;
            }
            else if(time <=45)
            {
                stime.Interval = 600;
            }
            else if(time<=60)
            {
                stime.Interval = 500;
            }
            Random r = new Random();
            int rn = r.Next(1, 9);
            label4.Text = (Convert.ToString(score));

            if (rn == 1)
            {
                button1.Visible = true;
                button1.Enabled = true;
            }
            else button1.Visible = false;

            if (rn == 2)
            {
                button2.Visible = true;
                button2.Enabled = true;
            }
            else button2.Visible = false;

            if (rn == 3)
            {
                button3.Visible = true;
                button3.Enabled = true;
            }
            else button3.Visible = false;

            if (rn == 4)
            {
                button4.Visible = true;
                button4.Enabled = true;
            }
            else button4.Visible = false;

            if (rn == 5)
            {
                button5.Visible = true;
                button5.Enabled = true;
            }
            else button5.Visible = false;

            if (rn == 6)
            {
                button6.Visible = true;
                button6.Enabled = true;
            }
            else button6.Visible = false; 
            
            if (rn == 7)
            {
                button7.Visible = true;
                button7.Enabled = true;
            }
            else button7.Visible = false;

            if (rn == 8)
            {
                button8.Visible = true;
                button8.Enabled = true;
            }
            else button8.Visible = false;

            if (rn == 9)
            {
                button9.Visible = true;
                button9.Enabled = true;
            }
            else button9.Visible = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            score += 10;
            button1.Enabled = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            score += 10;
            button2.Enabled = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            score += 10;
            button3.Enabled = false;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            score += 10;
            button4.Enabled = false;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            score += 10;
            button5.Enabled = false;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            score += 10;
            button6.Enabled = false;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            score += 10;
            button7.Enabled = false;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            score += 10;
            button8.Enabled = false;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            score += 10;
            button9.Enabled = false;
        }

        private void button11_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            stime.Enabled = false;
            sp.Stop();
        }
    }
}