#include <iostream>
#include <windows.h> // to clear the console when needed using system("cls") and using windowsAPI to use beep and key input commands.
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <string>

// Main plan : To assign notes on keyboard keys, and using if to execute these notes. Notes will be played automatically when pressing the keys. (No need to press enter.)

using namespace std;

//declarations
int Piano();
int Exit();
int HardcodePicker();
int Mario();

int Interface()
{
	cout << "Hello ! Welcome to Beepiano, an amateur piano program." << endl;
	cout << "Please enter what would you like to do today." << endl << endl;
	cout << "1. Play Piano." << endl;
	cout << "2. Play Hardcoded songs." << endl;
	cout << "3. Exit." << endl;
}

int Exit()
{
	exit;
	cout << "Hope you enjoyed !";                                                                                                  
}

int Choice()
{
	int number = 0;
	
	cin >> number;
	
	if(number==1)
	{
		system("cls");
		Piano();
	}
	
	if(number==2)
	{
		system("cls");
		HardcodePicker();
	}
	
	else if(number==3)
	{
		system("cls");
		Exit();
	}
	
	else exit;
	
}

int Piano()
{
  {
  while(true){
  			  cout << "Press 4 to return to main screen." << endl;
              cout << "Enter note : " << endl << endl;
              char note = getch();
           
              if(note == 'q') // do c
              {
              Beep(261,100);
              }
              if(note == 'w') // re d
              {
              Beep(293,100);
              }
              if(note == 'e') // mi e 
              {
              Beep(329,100);
              }
              if(note == 'r') // fa f
              {
              Beep(349,100);
              }
              if(note == 't')  // sol g
              {
              Beep(392,100);
              }
              if(note == 'y') // la a
              {
              Beep(440,100);
              }
              if(note == 'u') // si b
              {
              Beep(493,100);
              }                      
              if(note == 'i') // do c
              {
              Beep(523,100);
              }                      
              if(note == 'o') // re d
              {
              Beep(587,100);
              }
              if(note == 'p') // mi e
              {
              Beep(659,100);
              }   
              if(note == '[') // fa f
              {
              Beep(698,100);
              } 
              if(note == ']') // sol g
              {
              Beep(784,100);
              }
			  if(note == 'a') // rebemol
			  {
              Beep(277,100);
              } 
              if(note == 's') // mibemol
			  {
              Beep(311,100);
              }
              if(note == 'd') // solbemol
			  {
              Beep(370,100);
              }
              if(note == 'f') // labemol
			  {
              Beep(415,100);
              }
              if(note == 'g') // sibemol
			  {
              Beep(466,100);
              }
              if(note == 'h') // rebemol
			  {
              Beep(554,100);
              }
              if(note == 'j') // mibemol
			  {
              Beep(622,100);
              }
              if(note == 'k') // solbemol
			  {
              Beep(740,100);
              }
              if(note == '4')
			  {
              break;
              }      
			  system("cls"); // constantly clears screen
			  }			  			  
	}
	
	system("cls");
	Interface();
	Choice ();
}

int HardcodePicker()
{
	int choose = 0;
	cout << "Choose a song." << endl;
	cout << "1. Mario Theme song." << endl;
	
	int choice = 0;
	cin >> choice;
	if(choice == 1)
	{
	Mario();
	}
	
}

int Mario()
{
 		Beep (330,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (392,100);Sleep(700);
        Beep (196,100);Sleep(700);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
        Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (247,100);Sleep(500);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
        Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (247,100);Sleep(900);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (207,100);Sleep(100);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(500);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (523,100);Sleep(300);
        Beep (523,100);Sleep(100);
        Beep (523,100);Sleep(1100);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (207,100);Sleep(100);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(500);
        Beep (311,300);Sleep(300);
        Beep (296,300);Sleep(300);
        Beep (262,300);Sleep(1300);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(300);
        Beep (330,200);Sleep(50);
        Beep (262,200);Sleep(50);
        Beep (220,200);Sleep(50);
        Beep (196,100);Sleep(700);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (330,100);Sleep(700);
        Beep (440,100);Sleep(300);
        Beep (392,100);Sleep(500);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(300);
        Beep (330,200);Sleep(50);
        Beep (262,200);Sleep(50);
        Beep (220,200);Sleep(50);
        Beep (196,100);Sleep(700);
        
 cout << "Press 4 to return to main menu." << endl;
 int backout = 0;
 cin >> backout;
 if(backout == 4);
 {
 	system("cls");
 	Interface();
 	Choice();	
 }		
}

int main()
{
	Interface();
	Choice ();
}

