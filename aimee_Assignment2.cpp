// aimee_Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

int option1(int beginningYear, int endingYear, int years[], string disasterName[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (years[i] >= beginningYear && years[i] <= endingYear) {
            count++;
        }
    }
    int start = 0;
    switch (beginningYear) {
    case 2012:
        start = 0;
        for (int k = start; k < count; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2013:
        start = 5;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2014:
        start = 14;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2015:
        start = 22;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2016:
        start = 32;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2017:
        start = 47;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2018:
        start = 63;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    case 2019:
        start = 70;
        for (int k = start; k < count + start; k++) {
            cout << disasterName[k] << endl;
        }
        break;
    }

    return 0;
}

int option2(string typeOfDisaster, string disasterType[], int years[], int size) {
    vector<int> yearsHappened = {};
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (disasterType[i] == typeOfDisaster) {
            yearsHappened.push_back(years[i]);
            count++;
        }
    }
    vector<int> updated = {}; //the list of years when the disaster happened with no duplicates hence the name updated
    int count2012 = 0;
    int count2013 = 0;
    int count2014 = 0;
    int count2015 = 0;
    int count2016 = 0;
    int count2017 = 0;
    int count2018 = 0;
    int count2019 = 0;
    for (int j = 0; j < count; j++) {
        if (yearsHappened[j] == 2012) {
            count2012++;
        }
        if (yearsHappened[j] == 2013) {
            count2013++;
        }
        if (yearsHappened[j] == 2014) {
            count2014++;
        }
        if (yearsHappened[j] == 2015) {
            count2015++;
        }
        if (yearsHappened[j] == 2016) {
            count2016++;
        }
        if (yearsHappened[j] == 2017) {
            count2017++;
        }
        if (yearsHappened[j] == 2018) {
            count2018++;
        }
        if (yearsHappened[j] == 2019) {
            count2019++;
        }
    }
    int SIZE = 0;
    if (count2012 >= 1) {
        SIZE += 1;
        updated.push_back(2012);
    }
    if (count2013 >= 1) {
        SIZE += 1;
        updated.push_back(2013);
    }
    if (count2014 >= 1) {
        SIZE += 1;
        updated.push_back(2014);
    }
    if (count2015 >= 1) {
        SIZE += 1;
        updated.push_back(2015);
    }
    if (count2016 >= 1) {
        SIZE += 1;
        updated.push_back(2016);
    }
    if (count2017 >= 1) {
        SIZE += 1;
        updated.push_back(2017);
    }
    if (count2018 >= 1) {
        SIZE += 1;
        updated.push_back(2018);
    }
    if (count2019 >= 1) {
        SIZE += 1;
        updated.push_back(2019);
    }
    for (int k = 0; k < SIZE-1; k++) {
        cout << updated[k] << ", ";
    }
    cout << updated[SIZE - 1];

    return 0;
}

string option3Year(int year) { //this function will make the year into a string to go into the file
    string currentYear = to_string(year);
    return currentYear;
}

string option3Disasters(int year, int years[], string disasterType[], int size) { //this function will put all of the disaster types that occured in a specific year into the file
    int countYear = 0;
    vector<string> disastersInYear = {};
    vector<string> disastersYear = {};
    string output;
    int countSS = 0;
    int countTC = 0;
    int countW = 0;
    int countD = 0;
    int countF = 0;
    int countWS = 0;
    int countFr = 0;
    int SIZE = 0;
    for (int i = 0; i < size; i++) {
        if (years[i] == year) {
            disastersInYear.push_back(disasterType[i]);
            countYear++;
        }
    }
    for (int j = 0; j < countYear; j++) {
        if (disastersInYear[j] == "Severe Storm") {
            countSS++;
        }
        if (disastersInYear[j] == "Tropical Cyclone") {
            countTC++;
        }
        if (disastersInYear[j] == "Wildfire") {
            countW++;
        }
        if (disastersInYear[j] == "Drought") {
            countD++;
        }
        if (disastersInYear[j] == "Flooding") {
            countF++;
        }
        if (disastersInYear[j] == "Winter Storm") {
            countWS++;
        }
        if (disastersInYear[j] == "Freeze") {
            countFr++;
        }
    }
    if (countSS >= 1) {
        SIZE += 1;
        disastersYear.push_back("Severe Storm");
    }
    if (countTC >= 1) {
        SIZE += 1;
        disastersYear.push_back("Tropical Cyclone");
    }
    if (countW >= 1) {
        SIZE += 1;
        disastersYear.push_back("Wildfire");
    }
    if (countD >= 1) {
        SIZE += 1;
        disastersYear.push_back("Drought");
    }
    if (countF >= 1) {
        SIZE += 1;
        disastersYear.push_back("Flooding");
    }
    if (countWS >= 1) {
        SIZE += 1;
        disastersYear.push_back("Winter Storm");
    }
    if (countFr >= 1) {
        SIZE += 1;
        disastersYear.push_back("Freeze");
    }
    for (int k = 0; k < SIZE - 1; k++) {
        output += disastersYear[k];
        output += ", ";
    }
    output += disastersYear[SIZE - 1];
    return output;
}

string option3Deaths(int year, int years[], int deaths[], int size) { //this function will make the total deaths into a string to go into the file
    int td = 0;
    for (int i = 0; i < size; i++) {
        if (years[i] == year) {
            td += deaths[i];
        }
    }
    string totalDeaths = to_string(td);
    return totalDeaths;
}
int main()
{
    const int size = 74; //there are 74 disaters in the catastrophe.txt
    string disasterName[size] = { "Plains/East/Northeast Severe Weather (June-July 2012)", "Hurricane Isaac (August 2012)", "Hurricane Sandy (October 2012)", "Western Wildfires (Summer-Fall 2012)", "U.S. Drought/Heatwave (2012)", "Southeast Severe Weather (March 2013)", "Midwest/Plains Severe Weather (April 2013)", "Illinois Flooding and Severe Weather (April 2013)", "Midwest/Plains/East Tornadoes (May 2013)", "Midwest/Plains/Northeast Tornadoes (May 2013)", "Midwest Severe Weather (August 2013)", "Colorado Flooding (September 2013)", "Ohio Valley Tornadoes (November 2013)", "Western/Plains Drought/Heatwave (Spring-Fall 2013)", "Midwest/Southeast/Northeast Winter Storm (January 2014)", "Plains Severe Weather (April 2014)", "Midwest/Southeast/Northeast Tornadoes and Flooding (April 2014)", "Rockies/Midwest/Eastern Severe Weather (May 2014)", "Rockies/Central Plains Severe Weather (June 2014)", "Michigan and Northeast Flooding (August 2014)", "Rockies/Plains Severe Weather (September 2014)", "Western Drought (2014)", "Central and Eastern Winter storm Cold Wave (February 2015)", "Midwest/Ohio Valley Severe Weather (April 2015)", "South/Southeast Severe Weather (April 2015)", "Southern Plains Tornadoes (May 2015)", "Texas and Oklahoma Flooding and Severe Weather (May 2015)", "Central and Northeast Severe Weather (June 2015)", "South Carolina and East Coast Flooding (October 2015)", "Western and Alaskan Wildfires (Summer-Fall 2015)", "Texas Tornadoes and Midwest Flooding (December 2015)", "Western Drought (2015)", "Southeast and Eastern Tornadoes (February 2016)", "Texas and Louisiana Flooding (March 2016)", "Southern Severe Weather (March 2016)", "North Texas Hail Storm (March 2016)", "North/Central Texas Hail Storm (April 2016)", "Houston Flooding (April 2016)", "South/Southeast Tornadoes (April 2016)", "Plains Tornadoes and Central Severe Weather (May 2016)", "Rockies/Central Tornadoes and Severe Weather (May 2016)", "West Virginia Flooding and Ohio Valley Tornadoes (June 2016)", "Rockies and Northeast Severe Weather (July 2016)", "Louisiana Flooding (August 2016)", "Hurricane Matthew (October 2016)", "Western/Southeast Wildfires (Summer-Fall 2016)", "West/Northeast/Southeast Drought (2016)", "Southern Tornado Outbreak and Western Storms (January 2017)", "California Flooding (February 2017)", "Central/Southeast Tornado Outbreak (March 2017)", "Midwest Tornado Outbreak (March 2017)", "Southeast Freeze (March 2017)", "South/Southeast Severe Weather (March 2017)", "Missouri and Arkansas Flooding and Central Severe Weather (May 2017)", "Colorado Hail Storm and Central Severe Weather (May 2017)", "Minnesota Hail Storm and Upper Midwest Severe Weather (June 2017)", "Midwest Severe Weather (June 2017)", "Midwest Severe Weather (June 2017)", "Hurricane Harvey (August 2017)", "Hurricane Irma (September 2017)", "Hurricane Maria (September 2017)", "Western Wildfires California Firestorm (Summer-Fall 2017)", "North Dakota South Dakota and Montana Drought (Spring-Fall 2017)", "Central and Eastern Winter Storm (January 2018)", "Northeast Winter Storm (March 2018)", "Southeastern Tornadoes and Severe Weather (March 2018)", "Southern and Eastern Tornadoes and Severe Weather (April 2018)", "Central and Northeastern Severe Weather (May 2018)", "Central and Eastern Severe Weather (May 2018)", "Texas Hail Storm (June 2018)", "Southeast Ohio Valley and Northeast Severe Weather (February 2019)", "Texas Hail Storm (March 2019)", "South and Southeast Severe Weather (May 2019)", "Rockies Central and Northeast Tornadoes and Severe Weather (May 2019)" };
    int years[size] = { 2012, 2012, 2012, 2012, 2012, 2013, 2013, 2013, 2013, 2013, 2013, 2013, 2013, 2013, 2014, 2014, 2014, 2014, 2014, 2014, 2014, 2014, 2015, 2015, 2015, 2015, 2015, 2015, 2015, 2015, 2015, 2015, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2017, 2018, 2018, 2018, 2018, 2018, 2018, 2018, 2019, 2019, 2019, 2019 };
    string disasterType[size] = { "Severe Storm", "Tropical Cyclone", "Tropical Cyclone", "Wildfire", "Drought", "Severe Storm", "Severe Storm", "Flooding", "Severe Storm", "Severe Storm", "Severe Storm", "Flooding", "Severe Storm", "Drought", "Winter Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Flooding", "Severe Storm", "Drought", "Winter Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Flooding", "Severe Storm", "Flooding", "Wildfire", "Severe Storm", "Drought", "Severe Storm", "Flooding", "Severe Storm", "Severe Storm", "Severe Storm", "Flooding", "Severe Storm", "Severe Storm", "Severe Storm", "Flooding", "Severe Storm", "Flooding", "Tropical Cyclone", "Wildfire", "Drought", "Severe Storm", "Flooding", "Severe Storm", "Severe Storm", "Freeze", "Severe Storm", "Flooding", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Tropical Cyclone", "Tropical Cyclone", "Tropical Cyclone", "Wildfire", "Drought", "Winter Storm", "Winter Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm", "Severe Storm" };
    int deaths[size] = { 28, 9, 159, 8, 123, 1, 1, 4, 27, 10, 0, 9, 8, 53, 16, 0, 33, 0, 2, 2, 0, 0, 30, 2, 0, 4, 31, 1, 25, 12, 50, 0, 10, 5, 1, 0, 0, 8, 6, 2, 0, 23, 0, 13, 49, 21, 0, 24, 5, 6, 2, 0, 0, 20, 0, 0, 0, 0, 89, 97, 2981, 54, 0, 22, 9, 0, 3, 0, 5, 0, 2, 0, 0, 2 };

    cout << "What would you like to do?\n1: Look up year range\n2: Look up disaster\n3: Generate summary report" << endl;
    int option = 0;
    cout << "Select an option: ";
    cin >> option;

    int beginningYear = 0;
    int endingYear = 0;
    string fileName = "";
    string typeOfDisaster;
    int result = 0;
    
    switch (option) {
    case 1:
        cout << "\nEnter beginning year: " << endl;
        cin >> beginningYear;
        cout << "Enter ending year: " << endl;
        cin >> endingYear;
        cout << "\nAll disasters between " << beginningYear << " and " << endingYear << ": " << endl;
        result = option1(beginningYear, endingYear, years, disasterName, size);
        break;
    
    case 2:
        cin.ignore();
        cout << "Enter a disaster name: ";
        getline(cin, typeOfDisaster);
        transform(typeOfDisaster.begin(), typeOfDisaster.end(), typeOfDisaster.begin(), ::toupper);
        for (int j = 0; j < size; j++) {
            transform(disasterType[j].begin(), disasterType[j].end(), disasterType[j].begin(), ::toupper);
        }
        cout << "Years when disaster happened are: ";
        result = option2(typeOfDisaster, disasterType, years, size);
        break;
    case 3: 
        cout << "Enter output file name: ";
        cin >> fileName;
        
        ofstream disasterFile;
        disasterFile.open(fileName);
        disasterFile << "Years; Disasters; Total deaths\n";
        disasterFile << option3Year(2012) << "; " << option3Disasters(2012, years, disasterType, size) << "; " << option3Deaths(2012, years, deaths, size) << endl;
        disasterFile << option3Year(2013) << "; " << option3Disasters(2013, years, disasterType, size) << "; " << option3Deaths(2013, years, deaths, size) << endl;
        disasterFile << option3Year(2014) << "; " << option3Disasters(2014, years, disasterType, size) << "; " << option3Deaths(2014, years, deaths, size) << endl;
        disasterFile << option3Year(2015) << "; " << option3Disasters(2015, years, disasterType, size) << "; " << option3Deaths(2015, years, deaths, size) << endl;
        disasterFile << option3Year(2016) << "; " << option3Disasters(2016, years, disasterType, size) << "; " << option3Deaths(2016, years, deaths, size) << endl;
        disasterFile << option3Year(2017) << "; " << option3Disasters(2017, years, disasterType, size) << "; " << option3Deaths(2017, years, deaths, size) << endl;
        disasterFile << option3Year(2018) << "; " << option3Disasters(2018, years, disasterType, size) << "; " << option3Deaths(2018, years, deaths, size) << endl;
        disasterFile << option3Year(2019) << "; " << option3Disasters(2019, years, disasterType, size) << "; " << option3Deaths(2019, years, deaths, size) << endl;
        disasterFile.close();
        cin.get();
        
        string myText; // the rest is going to read out the file
        ifstream MyReadFile(fileName);
        while (getline(MyReadFile, myText)) {
            cout << myText << endl;
        }
        MyReadFile.close();
        break;
    }
}
