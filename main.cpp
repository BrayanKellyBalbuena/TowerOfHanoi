#include <iostream>

using namespace std;
int numeroPaso = 1;

void hanoi( int num, char A, char C, char B )
{
    if ( num == 1 )
    {
        cout << "paso #" << numeroPaso  << " Mueve el bloque " << num << " desde " << A << " hasta "
            << C << endl;
            numeroPaso++;
    }
    else
    {
        hanoi( num-1, A, B, C);
        cout << "paso #" << numeroPaso  << " Mueve el bloque " << num << " desde " << A << " hasta "
            << C << endl;
            numeroPaso++;
        hanoi( num - 1, B, C, A);
    }
}

int main()
{

   int n;
   char A,B,C;

   cout << "Los clavijas son A B C\n" << endl;
   cout << "Numero de discos: ";
   cin >> n;
   hanoi( n,'A', 'C', 'B' );
}
