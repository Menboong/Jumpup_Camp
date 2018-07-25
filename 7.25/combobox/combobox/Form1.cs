using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace combobox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.SelectedItem.ToString() == "귤")
            {
                label1.Text = comboBox1.SelectedItem +"을(를) 좋아하시는 군요";
            }
            else if (comboBox1.SelectedItem.ToString() == "딸기")
            {
                label1.Text = comboBox1.SelectedItem + "을(를) 좋아하시는 군요";
            }
            else if (comboBox1.SelectedItem.ToString() == "망고")
            {
                label1.Text = comboBox1.SelectedItem + "을(를) 좋아하시는 군요";
            }
            else if (comboBox1.SelectedItem.ToString() == "복숭아")
            {
                label1.Text = comboBox1.SelectedItem + "을(를) 좋아하시는 군요";
            }
            else if (comboBox1.SelectedItem.ToString() == "청포도")
            {
                label1.Text = comboBox1.SelectedItem + "을(를) 좋아하시는 군요";
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
