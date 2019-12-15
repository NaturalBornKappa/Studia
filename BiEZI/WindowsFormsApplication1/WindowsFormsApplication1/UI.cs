using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class UI : Form
    {
        public UI()
        {
            InitializeComponent();
        }

        private void UI_Load(object sender, EventArgs e)
        {

        }

        private void rokBox_TextChanged(object sender, EventArgs e)
        {
            int x = int.Parse(rokBox.Text);
        }

        private void misiacBox_TextChanged(object sender, EventArgs e)
        {
            int y = int.Parse(miesiacBox.Text);
        }

        private void dzienBox_TextChanged(object sender, EventArgs e)
        {
            int z = int.Parse(dzienBox.Text);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int rok, mc, dz; // rok, miesiąc, dzień
            int dzr = 1; //dzień roku
            Boolean prz = false; //rok przestępny

            rok = int.Parse(rokBox.Text);
            mc = int.Parse(miesiacBox.Text);
            dz = int.Parse(dzienBox.Text);

            if (rok % 4 == 0) prz = true;
            if (rok % 100 == 0 && rok % 400 != 0) prz = false;
            if ((mc > 2) && (prz == true)) dzr++;

            switch (mc)
            {
                case 1:
                    dzr = dz;
                    break;
                case 2:
                    dzr = dz + 31;
                    break;
                case 3:
                    dzr = dz + 31 + 28;
                    break;
                case 4:
                    dzr = dz + 31 + 28 + 31;
                    break;
                case 5:
                    dzr = dz + 31 + 28 + 31 + 30;
                    break;
                case 6:
                    dzr = dz + 31 + 28 + 31 + 30 + 31;
                    break;
                case 7:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30;
                    break;
                case 8:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31;
                    break;
                case 9:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                    break;
                case 10:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                    break;
                case 11:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                    break;
                case 12:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                    break;
                default:
                    label4.Text = "Nieprawidłowy miesiąc!";
                    break;
            }

            label4.Text = "Podana data to " + dzr + " dzień roku.";
            
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

    }
}
