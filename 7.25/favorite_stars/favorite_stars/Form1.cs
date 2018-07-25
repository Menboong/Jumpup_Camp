using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace favorite_stars
{
    public partial class favorite_star : Form
    {
        public favorite_star()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.SelectedItem.ToString() == "김재환")
            {
                pictureBox1.Load(@"D:\kjh.jpg");
                pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                label1.Text = "이름: 김재환 \n\n 생일:1996년 5월 27일 (22세) \n\n 키:175cm";
            }
            if (comboBox1.SelectedItem.ToString() == "백예린")
            {
                pictureBox1.Load(@"D:\byr.jpg");
                pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                label1.Text = "이름: 백예린 \n\n 생일:1997년 6월 26일 (21세) \n\n 키:165cm";
            }
            if (comboBox1.SelectedItem.ToString() == "아델")
            {
                pictureBox1.Load(@"D:\adele.jpg");
                pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                label1.Text = "이름: 아델 \n\n 본명: Adele Laurie Blue Adkins\n\n 생일:1988년 5월 5일 (30세) (22세)";
            }
        }
    }
}
