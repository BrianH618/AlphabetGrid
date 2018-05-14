#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int letters;
  vector<vector<char> >alphabet;


  do
  {
    cout<<"How many letters should there be per line? ";
    cin>>letters;
    
    if( letters < 1 || letters > 26 )
    {
      cout<<"\nPlease enter a number between 1-26.\n";
    }
  }while( letters < 1 || letters > 26 );
    int rows;
    if (26 % letters ==0)
    {
        rows=26%letters;
    }
    else
    {
        rows = 26/letters +1;
    }

    alpabet. resize(letters);
    for(int row =0; row <alpgabet.size(); row++)
    {
      alphabet[row].resize(letters);
    }

    char currentLetter='A';
    for(int row =0; row<alpgabet.size(); row++)
    {
        for(int col=0; col< alpgabet.size(); row++)
        {
            alpgabet[row][col] = currentLeter;
            currentLetter++; // increment to next letter in the ascii talble
            if(currentLetter>'Z')
            {
                currentLetter = 'Z';
            }
        }
    }

    //display matrix
    for(int row=0; row<alphabet.size(); row++)
    {
        for (int col=0; col< alphabet[row].size(); col++)
    }

  return 0;
}
