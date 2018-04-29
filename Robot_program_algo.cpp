/* An treasure is trapped in one of the four corners of a square grid. 
You are in the center of the grid and your robot can move one step at a time in any of the four directions. 
List out the shortest way that your robot get its treasure

Input format:

The first line contains an odd integer N (3 <= N < 100) denoting the size of the grid. 
This is followed by an NxN grid. Each cell is denoted by '-' (ascii value: 45). 
The bot position is denoted by 'm' and the princess position is denoted by 'p'.
Grid is indexed using Matrix Convention

Output format

Print out the moves you will take to rescue the princess in one go. 
The moves must be separated by '\n', a newline. The valid moves are LEFT or RIGHT or UP or DOWN.

Author: Abdur Rahman, Mohamed Ismail.   */ 





#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int cx=n/2;
    int cy=n/2;
    for (int i=cx;cx>0;cx--)
    {
        cout<<"UP"; cout<<'\n';    // Powermotor_up(100);
        cout<<"LEFT"; cout<<'\n';  // Powermotor_left(100);
    }
    for (int co=1;co<4;co++)
    {    if(grid[0][0]=='p')
           break;
      for(int j=0;j<n;j++)
           {  
             if (co==1)
             { cout<<"RIGHT"; cout<<'\n'; }    // Powermotor_right(100);   
             else if (co==2)
             { cout<<"DOWN"; cout<<'\n';}       // Powermotor_down(100);
             else if(co==3)
             {cout<<"LEFT"; cout<<'\n';}         // Powermotor_left(100);
            }
         if (co==1 && grid[0][n-1]=='p')
             break;
         else if (co==2 && grid[n-1][n-1]=='p')
             break;
         else if (co==3 && grid[n-1][0]=='p')
             break;
    }
}
     
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);             // sensor_input()
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
