using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            label3.TextAlign = ContentAlignment.MiddleLeft;
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            label3.TextAlign = ContentAlignment.MiddleCenter;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            label3.TextAlign = ContentAlignment.MiddleRight;
        }
        private void ChangeFont()
        {
            FontStyle fs = FontStyle.Regular;
            if(checkBox1.Checked)
            {
                fs |= FontStyle.Bold;
            }
            if(checkBox2.Checked)
            {
                fs |= FontStyle.Underline;
            }
            if(checkBox3.Checked)
            {
                fs |= FontStyle.Italic;
            }
            if(checkBox4.Checked)
            {
                fs |= FontStyle.Strikeout;
            }
            label3.Font = new Font("굴림", 9, fs);
        }
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            ChangeFont();
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            ChangeFont();
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
            ChangeFont();
        }

        private void checkBox4_CheckedChanged(object sender, EventArgs e)
        {
            ChangeFont();
        }
    }
}
