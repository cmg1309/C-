using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp9
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                fontDialog1.ShowApply = true;
            }
            else if(checkBox1.Checked == false)
            {
                fontDialog1.ShowApply = false;
            }

            if(checkBox2.Checked)
            {
                fontDialog1.ShowColor = true;
            }
            else if (checkBox2.Checked == false)
            {
                fontDialog1.ShowColor = false;
            }

            if (checkBox1.Checked && checkBox2.Checked)
            {
                fontDialog1.ShowApply = true;
                fontDialog1.ShowColor = true;
            }

            fontDialog1.ShowDialog();
        }
    }
}
