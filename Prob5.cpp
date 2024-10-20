/*Consider a class ‘Movie’ that contains information about a movie. The class has the 
following attributes: - - - 
The movie name 
The MPAA rating (for example, G, PG, PG-13, r) 
Array for num of people for each rating: 
1. The number of people that have rated this movie as a 1 (Terrible) 
2. The number of people that have rated this movie as a 2 (Bad) 
3. The number of people that have rated this movie as a 3 (oK) 
4. The number of people that have rated this movie as a 4 (Good) 
5. The number of people that have rated this movie as a 5 (Great) 
Implement the class with accessor and mutator functions - - - -  
For the movie name and MPAA rating. 
Write a function addRating that takes an integer as an input parameter. The 
function should verify that the parameter is a number between 1 and 5, and if 
so, increment the number of people rating the movie that match the input 
parameter. For example, if 3 is the input parameter, then the number of 
people that rated the movie as a 3 should be incremented by 1. 
Write another function, getAverage, that returns the average value for all of 
the movie ratings. 
Ex: if people’s ratings are: 10 -> 5stars 
18 -> 4stars 
60 -> 3stars 
45 -> 2stars 
5 -> 1star 
Av = (10*5 + 18*4 + 60*3 + 45*2 + 5*1) / (10+18+60+45+5)”Total 
num of people” 
Av = 2.877 
Finally, add a Function to print all the movie Info (name, MPAA rating, 
Average rating “float num between 0:5”) 
Test the class by writing a main function that creates at least two movie objects, 
adds at least five ratings for each movie, and outputs the movie name, MPAA rating, 
and average rating for each movie object.

*/
#include <iostream>
using namespace std;
 class Movie {
     private:
     string name;
     string MPAA_Rating;
     int rating[5]={0};
     float avg;
     public:
     void setName(string ename) {
         name = ename;
     }
     void setMPA_Rating(string empa) {
         MPAA_Rating = empa;
     }
     void setRating(int i) {
         rating[i-1]++;
     }
     float ReturnAvg() {
         int sum= (rating[0]+(rating[1]*2)+(rating[2]*3)+(rating[3]*4)+(rating[4]*5));
         int sumrate = rating[0] + rating[1] + rating[2] + rating[3]+rating[4];
         avg = (sum*1.0) / (sumrate*1.0);
         return avg;
     }
     void print() {
         cout<<"Name: "<<name<<endl;
         cout<<"MPA_Rating: "<<MPAA_Rating<<endl;
         cout<<"Rating: "<< ReturnAvg() <<endl;
     }
 };
int main() {
    Movie movie;
    movie.setName("TOP GUN");
    movie.setMPA_Rating("PG");
    for(int i=0;i<5;i++) {
        movie.setRating(1);
    }
    for(int i=0;i<45;i++) {
        movie.setRating(2);
    }
    for(int i=0;i<60;i++) {
        movie.setRating(3);
    }
    for(int i=0;i<18;i++) {
        movie.setRating(4);
    }
    for(int i=0;i<10;i++) {
        movie.setRating(5);
    }
    movie.print();
}
   
    for(int i=0;i<10;i++) {
        movie.setRating(5);
    }
    movie.print();
}
