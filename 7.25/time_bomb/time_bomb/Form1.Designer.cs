namespace WindowsFormsApplication1
{
    partial class Form1
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
            this.components = new System.ComponentModel.Container();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.A2 = new System.Windows.Forms.Button();
            this.A5 = new System.Windows.Forms.Button();
            this.A1 = new System.Windows.Forms.Button();
            this.A3 = new System.Windows.Forms.Button();
            this.A4 = new System.Windows.Forms.Button();
            this.progressBar1 = new System.Windows.Forms.ProgressBar();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.label1 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Cursor = System.Windows.Forms.Cursors.AppStarting;
            this.pictureBox1.Location = new System.Drawing.Point(161, 12);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(531, 289);
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("NanumGothicExtraBold", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button1.Location = new System.Drawing.Point(28, 12);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(97, 89);
            this.button1.TabIndex = 1;
            this.button1.Text = "start";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("NanumGothic", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button2.Location = new System.Drawing.Point(28, 137);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(97, 89);
            this.button2.TabIndex = 2;
            this.button2.Text = "stop";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // A2
            // 
            this.A2.Location = new System.Drawing.Point(54, 420);
            this.A2.Name = "A2";
            this.A2.Size = new System.Drawing.Size(97, 33);
            this.A2.TabIndex = 3;
            this.A2.Text = "O";
            this.A2.UseVisualStyleBackColor = true;
            // 
            // A5
            // 
            this.A5.Location = new System.Drawing.Point(193, 420);
            this.A5.Name = "A5";
            this.A5.Size = new System.Drawing.Size(97, 33);
            this.A5.TabIndex = 4;
            this.A5.Text = ">_<";
            this.A5.UseVisualStyleBackColor = true;
            // 
            // A1
            // 
            this.A1.Location = new System.Drawing.Point(350, 418);
            this.A1.Name = "A1";
            this.A1.Size = new System.Drawing.Size(97, 33);
            this.A1.TabIndex = 5;
            this.A1.Text = "C";
            this.A1.UseVisualStyleBackColor = true;
            // 
            // A3
            // 
            this.A3.Location = new System.Drawing.Point(498, 416);
            this.A3.Name = "A3";
            this.A3.Size = new System.Drawing.Size(97, 33);
            this.A3.TabIndex = 6;
            this.A3.Text = "K";
            this.A3.UseVisualStyleBackColor = true;
            // 
            // A4
            // 
            this.A4.Location = new System.Drawing.Point(638, 418);
            this.A4.Name = "A4";
            this.A4.Size = new System.Drawing.Size(97, 33);
            this.A4.TabIndex = 7;
            this.A4.Text = "E";
            this.A4.UseVisualStyleBackColor = true;
            // 
            // progressBar1
            // 
            this.progressBar1.Location = new System.Drawing.Point(138, 335);
            this.progressBar1.Maximum = 10;
            this.progressBar1.Name = "progressBar1";
            this.progressBar1.RightToLeftLayout = true;
            this.progressBar1.Size = new System.Drawing.Size(497, 23);
            this.progressBar1.TabIndex = 8;
            this.progressBar1.Click += new System.EventHandler(this.progressBar1_Click);
            // 
            // timer1
            // 
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(136, 374);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(38, 12);
            this.label1.TabIndex = 9;
            this.label1.Text = "label1";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(780, 486);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.progressBar1);
            this.Controls.Add(this.A4);
            this.Controls.Add(this.A3);
            this.Controls.Add(this.A1);
            this.Controls.Add(this.A5);
            this.Controls.Add(this.A2);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button A2;
        private System.Windows.Forms.Button A5;
        private System.Windows.Forms.Button A1;
        private System.Windows.Forms.Button A3;
        private System.Windows.Forms.Button A4;
        private System.Windows.Forms.ProgressBar progressBar1;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Label label1;
    }
}

