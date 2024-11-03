//Yang Zhang
//Lab 6
//10.15.2024

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    //Variables
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    double score1, score2, score3; //variable to store the scores. This is reused for each person
    double scoreAverage; //variable to store the sum of the average. This is reused for each person
    string name; //variable to store the names. This is reused for each person

    inFile.open("game_scores.txt"); //Opens the file named "inData.txt"
    outFile.open("outData.txt"); //Opens the file named "outData.txt"
    
    cout << "Processing data" << endl; //Just to print to confirm the code has ran.

    for (int i = 0; i < 3; i++) { //For loop that runs 3 times for the 3 people 
        inFile >> name >> score1 >> score2 >> score3; //gets the name followed by the three scores 
        scoreAverage = score1 + score2 + score3; //Finds the average by adding them together; 20% + 30% + 50% = 100%
        outFile << name; //Outputs the name 
        if (scoreAverage > 2000) //If statements to output each of the statements
            outFile << ": Congrats! You are an Expert!";
        else if (scoreAverage >= 1800 && scoreAverage <= 2000)
            outFile << ": Master - Good Job!";
        else if (scoreAverage >= 1500 && scoreAverage < 1800)
            outFile << ": Advanced - Good Job!";
        else if (scoreAverage >= 1000 && scoreAverage < 1500)
            outFile << ": Intermediate";
        else {
            outFile << ": Beginner - Keep Practicing!";
        }
        outFile << endl; //next line
        cout << "Looped " << i + 1 << " times. " << endl; //To confirm that the loop has run. i is i + 1 because it starts at 0, and we need it so that it tells us it ran x amount of times 
    }

    inFile.close(); //Close the infile
    outFile.close(); //Close the outfile

    return 0;
}