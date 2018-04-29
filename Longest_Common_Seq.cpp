                          
/*                                         DYNAMIC PROGRAMING ALGOS

Question:
A string is said to be a child of a another string if it can be formed by deleting 0 or more characters from the other string. 
Given two strings of equal length, what's the longest string that can be constructed such that it is a child of both?

For example, ABCD and ABDC have two children with maximum length 3, ABC and ABD. They can be formed by eliminating either the D or C from both strings. 
Note that we will not consider ABCD as a common child because we can't rearrange characters and ABCD  ABDC.

C++.
Question source: www.hackerrank.com
Answered by: Abdur Rahman,Mohamed Ismail   */
#include <bits/stdc++.h>
using namespace std;


  int commonChild(string s1, string s2)
{
     int l1= s1.size();
     int arr[l1+1][l1+1]={0};
    
    for (int i = 0; i < l1; i++)
    { 
        for (int j = 0; j < l1; j++)
        {
            arr[i][j] = 0; 
        }
    }
    for(int i=1; i<l1+1; i++)
    { 
      for(int j=1;j<l1+1; j++)
        {   
          if (s1[i-1]==s2[j-1])   
            { arr[i][j]= arr[i-1][j-1] + 1;
             cout<<arr[i][j]<<" ";
            }
         else
           {arr[i][j]= ( arr[i-1][j] > arr[i][j-1] )? arr[i-1][j]: arr[i][j-1];
           cout<<arr[i][j]<<" ";
           }
        }
   cout<<endl;
    }

 return arr[l1][l1]; 
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = commonChild(s1, s2);
   cout << result << endl;
    return 0;
}
