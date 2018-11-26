#include <iostream>
#include <string>
#include<vector>
using namespace std;

class course
{
private:
    string name;
    vector<double> testscore;
    double average()
    {
        int size = testscore.size();
        double total = 0;
        for (int i = 0; i < size; i++)
            total += testscore[i];
        double average = total / size;
        return average;
    }
    double avg = average();
    double calcGPA()
    {
        if (avg >= 90.0)
            return (4.0);
        else if (avg >= 80.0)
            return (3.0);
        else if (avg >= 75.0)
            return (2.0);
        else if (avg >= 70.0)
            return (1.0);
        else
            return(0.0);
    }
    double GPA = calcGPA();
    course(string title)
    {
        name = title;
    }
public:
    double getGPA()
    {
        return GPA;
    }
    void addtestscore(double score)
    {
        testscore.push_back(score);
    }
};

class student
{
private:
    string name;
    int stuID;
    vector<course> courses;
    double calcGPA()
    {
        int size = courses.size();
        double total;
        for (int i = 0; i < size; i++)
            total += courses[i].getGPA();
        double avg = total / size;
        return avg;
    }
    double avgGPA = calcGPA();
    student(string a, int b)
    {
        name = a;
        stuID = b;
    }
public:
    void addcourse(course addition)
    {
        courses.push_back(addition);
    }
};

int main()
{
    return 0;
}
