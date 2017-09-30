#include <numeric>

class Student :  public Person{
    private:
        vector<int> testScores;  
    public:
        /*      
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id)
        {
        //    Person(firstName, lastName, id);
            this->testScores = scores;
        }

        /*      
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        
        char calculate(){
            int average = std::accumulate(testScores.begin(), testScores.end(), 0)/testScores.size();
            
            if(average >= 90)
                return 'O';
            else if(average >= 80)
                return 'E';
            else if(average >= 70)
                return 'A';
            else if (average >= 55)
                return 'P';
            else if(average >= 40)
                return 'D';
            else
                return 'T';
            
        }
};
