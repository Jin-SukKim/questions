#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	char ch;
	int sum = 0;
	for (int i = 0; i<n; i++) {
		cin >> ch; // char only can get one character, so for loop run
		sum += (ch - '0');
	}
 
	cout << sum;
	return 0;
}
/*
int main() {
    int N,  sum = 0;
    // string num; // if N is higher than 10, it's oversize int size.
    char num_array[101];

    cin >> N;
    // cin >> num;
    cin >> num_array;

    if(1 <= N && N <= 100) {
        // strcpy(num_array, num.c_str());

        for(int i = N-1; i >= 0; i--) {
            cout << num_array[i] << "\n";
            sum += (num_array[i] - 48); // - ascii code
        } 

    }
    
    cout << sum;
    return 0;
}
*/

/*
#include <iostream>
int main() {
	int a, c, i;
    c=0;
	char b;
	std::cin >> a;	
	for (i = 0; i < a; i++)
  {
    std::cin >> b;
    c += b - '0';
  }		
  std::cout<<c;
  return 0;
}
*/