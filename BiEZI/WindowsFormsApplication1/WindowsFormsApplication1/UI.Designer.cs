namespace WindowsFormsApplication1
{
    partial class UI
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.monthCalendar1 = new System.Windows.Forms.MonthCalendar();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.rokBox = new System.Windows.Forms.TextBox();
            this.miesiacBox = new System.Windows.Forms.TextBox();
            this.dzienBox = new System.Windows.Forms.TextBox();
            this.result = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(264, 44);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(91, 130);
            this.button1.TabIndex = 0;
            this.button1.Text = "Wprowadź";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // monthCalendar1
            // 
            this.monthCalendar1.Location = new System.Drawing.Point(98, 266);
            this.monthCalendar1.Name = "monthCalendar1";
            this.monthCalendar1.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(103, 47);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(27, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "Rok";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(95, 99);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(43, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Miesiąc";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(103, 157);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(34, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "Dzień";
            // 
            // rokBox
            // 
            this.rokBox.Location = new System.Drawing.Point(144, 44);
            this.rokBox.Name = "rokBox";
            this.rokBox.Size = new System.Drawing.Size(100, 20);
            this.rokBox.TabIndex = 8;
            this.rokBox.TextChanged += new System.EventHandler(this.rokBox_TextChanged);
            // 
            // miesiacBox
            // 
            this.miesiacBox.Location = new System.Drawing.Point(144, 96);
            this.miesiacBox.Name = "miesiacBox";
            this.miesiacBox.Size = new System.Drawing.Size(100, 20);
            this.miesiacBox.TabIndex = 9;
            this.miesiacBox.TextChanged += new System.EventHandler(this.misiacBox_TextChanged);
            // 
            // dzienBox
            // 
            this.dzienBox.Location = new System.Drawing.Point(144, 150);
            this.dzienBox.Name = "dzienBox";
            this.dzienBox.Size = new System.Drawing.Size(100, 20);
            this.dzienBox.TabIndex = 10;
            this.dzienBox.TextChanged += new System.EventHandler(this.dzienBox_TextChanged);
            // 
            // result
            // 
            this.result.AutoSize = true;
            this.result.Location = new System.Drawing.Point(141, 216);
            this.result.Name = "result";
            this.result.Size = new System.Drawing.Size(0, 13);
            this.result.TabIndex = 11;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(103, 216);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(10, 13);
            this.label4.TabIndex = 12;
            this.label4.Text = " ";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // UI
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(462, 446);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.result);
            this.Controls.Add(this.dzienBox);
            this.Controls.Add(this.miesiacBox);
            this.Controls.Add(this.rokBox);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.monthCalendar1);
            this.Controls.Add(this.button1);
            this.Name = "UI";
            this.Text = "UI";
            this.Load += new System.EventHandler(this.UI_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.MonthCalendar monthCalendar1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox rokBox;
        private System.Windows.Forms.TextBox miesiacBox;
        private System.Windows.Forms.TextBox dzienBox;
        private System.Windows.Forms.Label result;
        private System.Windows.Forms.Label label4;
    }
}