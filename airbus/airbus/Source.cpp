#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>

GLfloat a = 0, b = 0, c = 0, d = 0, e = 0;
void building();
void road2();

void outline();
void blast();
void road();
void display2();
void display3();
void build_outline();
void build_outline2();
void trees();
void mountain();
int i;
void road1();

char s[20] = "PRESS S TO START";
char s1[300] = "<<-----------Maximize window for better view----------->>";
char s2[100] = "Sahyadri College of Engineering and Management ";
char s3[100] = "Department of Computer Science and Engineering";
char s4[20] = "Mini Project:";
char s5[50] = "Airbus 320";
char s6[200] = "Bhumi";
char s7[200] = "USN-4SF18CS190";
char s12[200] = "Renil M S";
char s13[200] = "USN-4SF18CS119";
char s8[200] = "Under the guidance of: Ms.Megha Rani R";
char s9[50] = "Asst. Professor, Dept. of CSE";
char s10[100] = "PRESS E TO EXIT";
char s11[100] = "PRESS F FOR FLYING THE PLANE";
char texta[] = { "BOOOOOM!!" };
char textb[] = { "DENVER INTERNATIONAL AIRPORT" };
char textc[] = { "CHICAGO INTERNATIONAL AIRPORT" };
char textf[] = { "The main objective of this project is to showcase the Aircrash which had taken place on 19 July 1989." };
char textg[] = { "United Airlines flight 232 was en route from Denver to Chicago on July 19, 1989 when the engine in the tail of the DC - 10 suffered engine failure." };
char textu[] = { "Which resulting in crashing of the plane while reaching the airport.It was one of the 13 plane crashes that changed aviation.." };
int j, n;
int t, o, m, f, g, u;
int flag = 0;

void update(int value)
{
	a += 0.0;	//Plane position takeoff on x axis
	b -= 0.0;	//Road Strip backward movement
	c += 0;	//take off at certain angle on y axis

	if (b <= -78.0)// moving of run way
		b = 0.0;

	glutPostRedisplay();
	glutTimerFunc(200, update, 0);//delay
}
void update1(int value)
{
	m = 0.0;	//Plane position takeoff on x axis
	b -= 0.0;	//Road Strip backward movement
	n += 0;	//take off at certain angle on y axis

	if (b <= -78.0)// moving of run way
		b = 0.0;

	glutPostRedisplay();
	glutTimerFunc(10, update, 0);//delay
}
void building()
{
	glBegin(GL_POLYGON);

	glColor3f(0.692, 0.7690, 0.870);

	glVertex2f(60, 180);
	glVertex2f(60, 350);
	glVertex2f(400, 350);
	glVertex2f(400, 180);

	glEnd();
}

void mountain1()

{
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.2, 0.0);
	glVertex2i(240, 0);
	glVertex2i(290, 125);
	glVertex2i(400, 0);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.3, 0.0);
	glVertex2i(300, 0);
	glVertex2i(390, 105);
	glVertex2i(499, 0);

	glEnd();

}
void building2()
{
	glBegin(GL_POLYGON);
	glColor3f(0.692, 0.7690, 0.870);
	glVertex2i(65, 200);

	glVertex2i(65, 370);
	glVertex2i(300, 370);
	glVertex2i(300, 200);

	glEnd();
}
void buildgate2()
{

	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.3, 0.50);
	glVertex2i(120, 200);
	glVertex2i(120, 260);
	glVertex2i(210, 260);
	glVertex2i(210, 200);
	glEnd();
}
void buildgateout2()
{
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);

	glVertex2i(120, 200);
	glVertex2i(120, 260);
	glVertex2i(120, 260);
	glVertex2i(210, 260);
	glVertex2i(210, 260);
	glVertex2i(210, 200);
	glEnd();
}
void buildout2()
{
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);

	glVertex2i(65, 200);
	glVertex2i(65, 370);
	glVertex2i(65, 330);
	glVertex2i(300, 330);
	glVertex2i(65, 370);
	glVertex2i(300, 370);
	glVertex2i(300, 370);
	glVertex2i(300, 200);
	glVertex2i(300, 200);
	glVertex2i(65, 200);
	glEnd();
}

void buildingGate()

{
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.3, 0.50);
	glVertex2i(150, 180);
	glVertex2i(150, 268);
	glVertex2i(265, 268);
	glVertex2i(265, 180);
	glEnd();
}
void buildingOUT()
{
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(60, 180);
	glVertex2f(60, 350);
	glVertex2f(60, 320);
	glVertex2f(400, 320);
	glVertex2f(60, 350);
	glVertex2f(400, 350);
	glVertex2f(400, 350);
	glVertex2f(400, 180);
	glVertex2f(400, 180);
	glVertex2f(60, 180);

	glEnd();
}

void outlineroad()
{
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(100, 100);
	glVertex2f(150, 180);
	glVertex2f(150, 180);
	glVertex2f(265, 180);
	glVertex2f(265, 180);
	glVertex2f(230, 100);
	glEnd();
}
void road2()
{
	glBegin(GL_POLYGON);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2f(100, 100);
	glVertex2f(150, 180);
	glVertex2f(265, 180);
	glVertex2f(230, 100);
	glEnd();
}

void trees()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.3, 0.0);
	glVertex2i(112, 310);
	glVertex2i(112, 333);
	glVertex2i(109, 333);
	glVertex2i(109, 310);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(90, 330);
	glVertex2i(130, 330);
	glVertex2i(110, 380);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.3, 0.0);
	glVertex2i(12, 310);
	glVertex2i(12, 333);
	glVertex2i(9, 333);
	glVertex2i(9, 310);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(-10, 330);
	glVertex2i(30, 330);
	glVertex2i(10, 380);
	glEnd();
}

void mountain()
{
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.0, 0.0);
	glVertex2i(-20, 290);
	glVertex2i(100, 305);
	glVertex2i(30, 370);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	glVertex2i(40, 290);
	glVertex2i(230, 305);
	glVertex2i(150, 376);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.0, 0.0);
	glVertex2i(140, 300);
	glVertex2i(350, 305);
	glVertex2i(270, 376);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	glVertex2i(200, 290);
	glVertex2i(490, 200);
	glVertex2i(360, 376);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	glVertex2i(490, 210);
	glVertex2i(499, 285);
	glVertex2i(300, 348);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.0, 0.0);
	glVertex2i(200, 180);
	glVertex2i(410, 364);
	glVertex2i(509, 304);
	glEnd();
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	if (flag == 0)
	{
		/*	char s[20] = "PRESS S TO START";
			char s1[300] = "Maximize window for better view";
			char s2[100] = "Sahyadri College of Engineering and Management ";
			char s3[100] = "Department of Computer Science and Engineering";
			char s4[20] = "Mini Project:";
			char s5[50] = "Airbus 320";
			char s6[200] = "Bhumi";
			char s7[200] = "USN-4SF18CS190";
			char s12[200] = "Renil M S";
			char s13[200] = "USN-4SF18CS119";
			char s8[200] = "Under the guidance of: Ms.Megha Rani R";
			char s9[50] = "Asst. Professor, Dept. of CSE";
			char s10[100] = "PRESS Q TO EXIT";
			char s11[100] = "PRESS M TO MOVE THE PLANE";
		*/
		glColor3f(0.3, 0.9, 0.8);

		for (i = 0; s[i] != '\0'; i++) //Maximize window for better view
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);
		glRasterPos3f(170, 20, 0);

		for (i = 0; s1[i] != '\0'; i++)  //Sahyadri College of Engineering and Management
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s1[i]);
		glRasterPos3f(180, 430, 0);

		for (i = 0; s2[i] != '\0'; i++) //DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s2[i]);
		glRasterPos3f(180, 400, 0);

		for (i = 0; s3[i] != '\0'; i++) //Mini Project:
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[i]);
		glRasterPos3f(220, 280, 0);

		for (i = 0; s4[i] != '\0'; i++) //Airbus 320
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s4[i]);
		glRasterPos3f(270, 280, 0);

		for (i = 0; s5[i] != '\0'; i++) //Bhumi 
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s5[i]);
		glRasterPos3f(350, 230, 0);

		for (i = 0; s6[i] != '\0'; i++) //USN-4SF18CS190
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s6[i]);
		glRasterPos3f(350, 210, 0);

		for (i = 0; s7[i] != '\0'; i++) //Renil M S
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s7[i]);
		glRasterPos3f(350, 190, 0);

		for (i = 0; s12[i] != '\0'; i++) //USN-4SF18CS119
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s12[i]);
		glRasterPos3f(350, 170, 0);

		for (i = 0; s13[i] != '\0'; i++) //Under the guidance of: Ms.Megha Rani R
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s13[i]);
		glRasterPos3f(195, 350, 0);

		for (i = 0; s8[i] != '\0'; i++) //Asst. Professor, Dept. of CSE
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
		glRasterPos3f(215, 330, 0);

		for (i = 0; s9[i] != '\0'; i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s9[i]);
		glRasterPos3f(58, 100, 0);

		for (i = 0; s10[i] != '\0'; i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s10[i]);
		glRasterPos3f(58, 80, 0);

		for (i = 0; s11[i] != '\0'; i++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s11[i]);
		glRasterPos3f(58, 60, 0);

	}
	else
	{
		road();
		mountain();

		//green
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.6, 0.0);
		glVertex2i(-10, 300);
		glVertex2i(645, 310);
		glVertex2i(940, 100);
		glVertex2i(-10, 100);
		glEnd();

		trees();
		building();
		buildingGate();
		buildingOUT();
		road2();
		outlineroad();

		glColor3f(0.0, 0.0, 0.0);
		glRasterPos3f(150, 330, 0);
		for (t = 0; textb[t] != '\0'; t++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, textb[t]);
		//plane construction

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(1, 1, 0);
		glBegin(GL_POLYGON);//rectangular body
		glVertex2f(0.0, 30.0);
		glVertex2f(0.0, 55.0);
		glVertex2f(135.0, 55.0);
		glVertex2f(135.0, 30.0);
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);//upper triangle construction plane
		glVertex2f(135.0, 55.0);
		glVertex2f(150.0, 50.0);
		glVertex2f(155.0, 45.0);
		glVertex2f(160.0, 40.0);
		glVertex2f(135.0, 40.0);
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(0.0, 0.0, 0.0);
		glBegin(GL_LINE_LOOP);//outline of upper triangle plane
		glVertex2f(135.0, 55.0);
		glVertex2f(150.0, 50.0);
		glVertex2f(155.0, 45.0);
		glVertex2f(160.0, 40.0);
		glVertex2f(135.0, 40.0);
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_POLYGON);//lower triangle
		glVertex2f(135.0, 40.0);
		glVertex2f(160.0, 40.0);
		glVertex2f(160.0, 37.0);
		glVertex2f(145.0, 30.0);
		glVertex2f(135.0, 30.0);
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_POLYGON);//back wing 
		glVertex2f(0.0, 55.0);
		glVertex2f(0.0, 80.0);
		glVertex2f(10.0, 80.0);
		glVertex2f(40.0, 55.0);
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_POLYGON);//left side wing
		glVertex2f(65.0, 55.0);
		glVertex2f(50.0, 70.0);
		glVertex2f(75.0, 70.0);
		glVertex2f(90.0, 55.0);
		glEnd();
		glPopMatrix();

		glPushMatrix();
		glTranslated(a, c, 0.0);
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_POLYGON);//rightside wing
		glVertex2f(70.0, 40.0);
		glVertex2f(100.0, 40.0);
		glVertex2f(80.0, 15.0);
		glVertex2f(50.0, 15.0);
		glEnd();
		glPopMatrix();

		if (c > 390)    //timer to jump to next display
		{
			display2();
			d += 5;//plane takeoff on x in 2nd display
		}

		if (a > 500.0)//window position during take off
		{
			a = 0.0;
			b = 0.0;
		}

		if (c > 400)//timer to jump to 3rd display
		{
			display3();
			e += 5;//plane takeoff on x in 3rd display

			if (e > 250)//timer to call blast function
			{
				blast();
				e = 450;
			}
		}

	}
	glFlush();
	glutSwapBuffers();
}

void blast(void)//blast polygon construction
{
	b = 0;
	glPushMatrix();
	glTranslated(-10.0, -60.0, 0.0);
	glColor3f(0.9, 0.5, 0.2);
	b = 0;
	glBegin(GL_POLYGON);
	glVertex2f(404.4, 220.0);
	glVertex2f(384.0, 185.0);
	glVertex2f(368.0, 244.5);
	glVertex2f(344.0, 255.0);
	glVertex2f(347.2, 314.5);
	glVertex2f(332.8, 342.5);
	glVertex2f(347.2, 377.5);
	glVertex2f(352.0, 430.0);
	glVertex2f(379.2, 419.5);
	glVertex2f(396.8, 465.0);
	glVertex2f(416.0, 430.0);
	glVertex2f(440.0, 447.5);
	glVertex2f(452.8, 412.5);
	glVertex2f(472.0, 412.5);
	glVertex2f(475.2, 370.5);
	glVertex2f(488.0, 352.5);
	glVertex2f(480.0, 322.5);
	glVertex2f(490.0, 284.0);
	glVertex2f(470.0, 272.5);
	glVertex2f(475.2, 217.5);
	glVertex2f(444.8, 220.0);
	glVertex2f(425.6, 185.0);
	glVertex2f(404.8, 220.0);
	glEnd();
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glRasterPos3f(380, 270, 0);
	for (j = 0; texta[j] != '\0'; j++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, texta[j]);
}

void road1()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//black road
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 100.0);
	glVertex2f(250.0, 25.0);
	glVertex2f(250.0, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.5, 0.0);
	glBegin(GL_POLYGON);//yellow strips on road
	glVertex2f(20.0, 20.0);
	glVertex2f(30.0, 45.0);
	glVertex2f(80.0, 30.0);
	glVertex2f(75.0, 20.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(85.0, 20.0);
	glVertex2f(95.0, 45.0);
	glVertex2f(135.0, 30.0);
	glVertex2f(130.0, 20.0);
	glEnd();
	glPopMatrix();
}

void road()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//black road
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 100.0);
	glVertex2f(500.0, 100.0);
	glVertex2f(500.0, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.5, 0.0);
	glBegin(GL_POLYGON);//yellow strips on road
	glVertex2f(0.0, 40.0);
	glVertex2f(8.0, 60.0);
	glVertex2f(58.0, 60.0);
	glVertex2f(50.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100.0, 40.0);
	glVertex2f(108.0, 60.0);
	glVertex2f(158.0, 60.0);
	glVertex2f(150.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(200.0, 40.0);
	glVertex2f(208.0, 60.0);
	glVertex2f(258.0, 60.0);
	glVertex2f(250.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(300.0, 40.0);
	glVertex2f(308.0, 60.0);
	glVertex2f(358.0, 60.0);
	glVertex2f(350.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(400.0, 40.0);
	glVertex2f(408.0, 60.0);
	glVertex2f(458.0, 60.0);
	glVertex2f(450.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(500.0, 40.0);
	glVertex2f(508.0, 60.0);
	glVertex2f(558.0, 60.0);
	glVertex2f(550.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b, 0.0, 0.0);
	glColor3f(0.9, 0.7, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(600.0, 40.0);
	glVertex2f(608.0, 60.0);
	glVertex2f(658.0, 60.0);
	glVertex2f(650.0, 40.0);
	glEnd();
	glPopMatrix();
}
void display2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	mountain();

	//green
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.699740, 0.8);
	glVertex2i(-10, 300);
	glVertex2i(645, 310);
	glVertex2i(940, 0);
	glVertex2i(-10, 0);
	glEnd();

	trees();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 30.0);
	glVertex2f(0.0, 55.0);
	glVertex2f(135.0, 55.0);
	glVertex2f(135.0, 30.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(135.0, 55.0);
	glVertex2f(150.0, 50.0);
	glVertex2f(155.0, 45.0);
	glVertex2f(160.0, 40.0);
	glVertex2f(135.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(135.0, 55.0);
	glVertex2f(150.0, 50.0);
	glVertex2f(155.0, 45.0);
	glVertex2f(160.0, 40.0);
	glVertex2f(135.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(135.0, 40.0);
	glVertex2f(160.0, 40.0);
	glVertex2f(160.0, 37.0);
	glVertex2f(145.0, 30.0);
	glVertex2f(135.0, 30.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 55.0);
	glVertex2f(0.0, 80.0);
	glVertex2f(10.0, 80.0);
	glVertex2f(40.0, 55.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(65.0, 55.0);
	glVertex2f(50.0, 70.0);
	glVertex2f(75.0, 70.0);
	glVertex2f(90.0, 55.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(d, 410.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(70.0, 40.0);
	glVertex2f(100.0, 40.0);
	glVertex2f(80.0, 15.0);
	glVertex2f(50.0, 15.0);

	glEnd();
	glPopMatrix();
}

void display3()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.499740, 0.0);
	glVertex2i(0, 300);
	glVertex2i(645, 300);
	glVertex2i(940, 0);
	glVertex2i(-10, 0);
	glEnd();
	building2();

	glColor3f(0.0, 0.0, 0.0);
	glRasterPos3f(100, 335, 0);
	for (o = 0; textc[o] != '\0'; o++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, textc[o]);
	buildout2();
	buildgateout2();
	buildgate2();
	road1();
	mountain1();
	glPushMatrix();
	glTranslated(10, 30, 0.0);
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);//rectangular body
	glVertex2f(0.0, 30.0);
	glVertex2f(0.0, 55.0);
	glVertex2f(135.0, 55.0);
	glVertex2f(135.0, 30.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(25, 8, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);//upper triangle construction plane
	glVertex2f(135.0, 55.0);
	glVertex2f(150.0, 50.0);
	glVertex2f(155.0, 45.0);
	glVertex2f(160.0, 40.0);
	glVertex2f(135.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(25, 8, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);//outline of upper triangle plane
	glVertex2f(135.0, 55.0);
	glVertex2f(150.0, 50.0);
	glVertex2f(155.0, 45.0);
	glVertex2f(160.0, 40.0);
	glVertex2f(135.0, 40.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(40, 95, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//lower triangle
	glVertex2f(135.0, 40.0);
	glVertex2f(160.0, 40.0);
	glVertex2f(160.0, 37.0);
	glVertex2f(145.0, 30.0);
	glVertex2f(135.0, 30.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 90, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//back wing 
	glVertex2f(0.0, 55.0);
	glVertex2f(0.0, 80.0);
	glVertex2f(10.0, 80.0);
	glVertex2f(40.0, 55.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 60, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//left side wing
	glVertex2f(65.0, 55.0);
	glVertex2f(50.0, 70.0);
	glVertex2f(75.0, 70.0);
	glVertex2f(90.0, 55.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(63, 88, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//rightside wing
	glVertex2f(70.0, 40.0);
	glVertex2f(100.0, 40.0);
	glVertex2f(80.0, 15.0);
	glVertex2f(50.0, 15.0);
	glEnd();
	glPopMatrix();

	update1(1);
	glColor3f(0.0, 0.0, 0.0);

	//Typing text
	glRasterPos3f(0, 450, 0);

	for (f = 0; textg[f] != '\0'; f++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textf[f]);
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(0, 430, 0);
	for (g = 0; textg[g] != '\0'; g++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textg[g]);
	glColor3f(0.0, 0.0, 0.0);

	glColor3f(0.0, 0.0, 0.0);
	glRasterPos3f(0, 410, 0);
	for (u = 0; textu[u] != '\0'; u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textu[u]);
}
void myinit()
{
	glClearColor(0.196078f, 0.196078f, 0.8f, 0.0f);
	glColor3f(0.2, 0.0, 0.3);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void keys(unsigned char key, int x, int y)
{
	if (key == 's')
		flag = 1;

	if (key == 'e') exit(0);

	if (key == 'f')
	{
		a += 4.0;	//Plane position takeoff on x axis
		b -= 5.0;	//Road Strip backward movement
		c += 5;	//take off at certain angle on y axis
	}
	display();
	if (b <= -78.0) // moving of run way
	{
		b -= 2.0;//take off at certain angle on y axis
		display3();
	}
}

void main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(900.0, 800.0);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("AirBus 320");
	glutDisplayFunc(display);
	myinit();
	glutKeyboardFunc(keys);
	glutTimerFunc(200, update, 0);
	glutMainLoop();
}