#include <string>
#include <iostream>
using namespace std;
int string_size;
string DNAtoRNa;
char input_char;
string DNAtoRNA(string dna, int string_size){
    for (int i = 0; i < string_size; i++){
      cin >> input_char;
      DNAtoRNa.push_back(input_char);
      if (DNAtoRNa[i] != 'G' && DNAtoRNa[i] != 'C' && DNAtoRNa[i] != 'A' && DNAtoRNa[i] != 'T') {
        cout << "invalid character for dna string!!!!" << endl;
        break;
    }    }
    cout << "Input DNA string: ";
    for (int i = 0; i < string_size; i++)
    {   
        cout << DNAtoRNa[i];
    }
    cout << endl;
    cout << "The RNA string: ";
    for (int i = 0; i < string_size; i++)
    {
        if (DNAtoRNa[i] == 'T')
        {
            DNAtoRNa[i] = 'U'; 
        }
        cout << DNAtoRNa[i];
    }
    
  return "";
}

int main()
{   cout << "How long should the string be\n";
    cin >> string_size;
    string dna;
    DNAtoRNA(dna, string_size);
    return 0;
}