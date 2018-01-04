#include <iostream>
#include <vector>

using namespace std;

vector<int> findMode(int array[], int size);

int main()
{
   
     const int SIZE = 10;
    int set[SIZE] = {2,2,2,4,5,6,7,7,9,10};
  
    
    vector<int> result = findMode(set, SIZE );
    

    
    

    
    for(int count = 0 ; count < result.size(); count++)
    {
        cout<<result[count] <<endl;
    }
    
 
 
        return 0;
}
