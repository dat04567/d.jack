#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;
void PrintMassage(string message, bool printTop = true, bool printBootom = true)
{
	if (printTop)
	{
		cout << "+---------------------------------+" << endl;
		cout << "|";
	}
	else
	{
		cout << "|" ;
	}

		bool front = true;
		for (int i = message.length(); i < 33; i++) // chay ne 
		{
			if (front)
			{
				message = " " + message;
			}			
			else
			{
				message += " ";
			}				
			front = !front;

		}
		cout << message.c_str();
		if (printBootom)
		{
			cout <<"|" << endl ;
			cout << "+---------------------------------+" << endl;
			
		}
		else
		{
			cout << "|" << endl;
		}
}
	void DrawHangman( int Guesscount = 0 )
	{
	
		if (Guesscount >= 1)
		{
			PrintMassage("|",false  , false);
		}		
			else
		{
			PrintMassage("", false, false);
		}
		if (Guesscount >= 2)
		{
			PrintMassage("|", false, false);
		}
		else
		{
			PrintMassage("", false, false);
		}
		if (Guesscount >= 3)
		{
			PrintMassage("O", false, false);
		}
		else
		{
			PrintMassage("", false, false);
		}
		if (Guesscount == 4)
		{
			PrintMassage("/  ", false, false);
		}
		if (Guesscount == 5)
		{
			PrintMassage("/| ", false, false);
		}
		if (Guesscount >= 6)
		{
			PrintMassage("/|\\", false, false);
		}
		else
		{
			PrintMassage("", false, false);
		}
		if (Guesscount >= 7)
		{
			PrintMassage("|", false, false);
		}
		else
		{
			PrintMassage("", false, false);
		}
		if (Guesscount == 8)
		{
			PrintMassage("/\\", false, false);
		}
		if (Guesscount >= 9)
		{
			PrintMassage("/ \\", false, false);
		}
		else
		{
			PrintMassage("", false, false);
		}
		
	}
	void PrintLetters(string input, char from, char to)
	{
		string s;
		for (int i = from; i <= to; i++)
		{
			if (input.find(i) == string::npos)
			{
				s += i ;
				s += " ";
			}				
			else
				s += "  ";
		}
		PrintMassage(s, false, false);
		
	}
	void PrintAvaiableLetter(string taken)
	{
		PrintMassage("Available letters");
		PrintLetters(taken, 'A', 'M');
		PrintLetters(taken, 'N', 'Z');
	}
	bool PrintWordAndCheckWin(string word, string guessed)
	{
		bool won = true;
		string s;
		for (int i = 0; i < word.length(); i++)
		{
			if (guessed.find(word[i]) == string::npos)
			{
				won = false;
				s += "_ ";
			}
			else
			{
				s += word[i];
				s += " ";
			}
		}
		PrintMassage(s, false);
		return won;
	}
	string LoadRandomWorld(string path)
	{
		int linecount = 0;
		string word;
		vector<string> v;
		ifstream reader(path);
		if (reader.is_open())
		{
			while (std::getline(reader, word))
				v.push_back(word);
			int randomLine = rand() % v.size();	
			word = v.at(randomLine);
			reader.close();
		}
		return word;

	}
	int TriesLeft(string word, string guessed)
	{
		int error = 0;
		for (int i = 0; i < guessed.length(); i++)
		{
			if (word.find(guessed[i]) == string::npos)
			{
				error++;
			}
		}
		return error;

	}
	int main()
	{
		srand(time(0));
		string guesses;
		/*string guesses == " ten gi do";*/
		string wordtoguess;
		wordtoguess = LoadRandomWorld("word.txt");
		/*cout << wordtoguess << endl << endl;*/
		int tries = 0;
		bool win = false;
		do
		{
			system("cls");
			PrintMassage("HANGMAN");
			DrawHangman(tries);
			PrintAvaiableLetter(guesses);
			PrintMassage("Guess the word");
			win = PrintWordAndCheckWin(wordtoguess, guesses);
			if (win)
				break;
			char x;
			cout << ">"; cin >> x;
			if (guesses.find(x) == string::npos)
			{
				guesses += x;
			}
			tries = TriesLeft(wordtoguess, guesses);
		} while (tries < 10);
		if (win)
			PrintMassage("YOU WON");
		else
			PrintMassage("GAME OVER");
		system("pause");
		/*PrintMassage(" GAME HANGMAN ");
		DrawHangman(9);
		PrintAvaiableLetter(guesses);
		PrintMassage("Guess the word");
		PrintWordAndCheckWin("ALEXES", guesses);*/
		getchar();
		return 0;
	}
