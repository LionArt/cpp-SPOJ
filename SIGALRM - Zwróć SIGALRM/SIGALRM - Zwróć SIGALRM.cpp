/* Andrulewicz Artur
SIGALRM - Zwr�� SIGALRM
2018-07-26
*/

#include <signal.h>

using namespace std;

int main()
{
    raise(SIGALRM);
}
