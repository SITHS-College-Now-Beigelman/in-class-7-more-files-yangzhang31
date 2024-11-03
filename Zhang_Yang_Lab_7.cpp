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
    string name1, name2, name3; //variable to store the names

    inFile.open("file game_scores.txt"); //Opens the file named "inData.txt"
    outFile.open("outData.txt"); //Opens the file named "outData.txt"
    
    cout << "Processing data" << endl; //Just to print to confirm the code has ran.

    inFile >> name1 >> score1 >> score2 >> score3;
    scoreAverage = score1 + score2 + score3;
    outFile << name1;
    if (scoreAverage > 2000) 
        outFile << "Congrats! You are an Expert!";
    else if (scoreAverage >= 1800 && scoreAverage <= 2000)
        outFile << "Master - Good Job!";
    else if (scoreAverage >= 1500 && scoreAverage < 1800)
        outFile << "Advanced - Good Job!";
    else if (scoreAverage >= 1000 && scoreAverage < 1500)
        outFile << "Intermediate";
    else {
        outFile << "Beginner - Keep Practicing!";
    }
    outFile << endl;
    




    inFile.close(); //Close the infile
    outFile.close(); //Close the outfile

    return 0;
}