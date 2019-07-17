// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int n, sx, sy;
int arr[35][35];

int search(int x, int y)
{
    if(x<0||y<0||y>=n) return -1;
    if(arr[x][y] == 1) return -1;
    
    int left = -1, right = -1;
    if(!(x-1<0||y-1<0)&&arr[x-1][y-1])
    {
        left = search(x-2, y-2);   
    }
    if(!(x-1<0||y+1>=n)&&arr[x-1][y+1])
    {
        right = search(x-2, y+2);   
    }
    
    return max(left, right) + 1;
}

int solution(vector<string> &B) 
{
    n = B[0].size();
    // write your code in C++14 (g++ 6.2.0)
    for(unsigned int i=0;i<B.size();i++)
    {
        for(unsigned int j=0;j<B[i].size();j++)
        {
            if(B[i][j] == 'X') arr[i][j] = 1;
            else arr[i][j] = 0;
            
            if(B[i][j] == 'O')
            {
                sx = i, sy = j;
            }
        }
    }
    
    return search(sx, sy);
}
