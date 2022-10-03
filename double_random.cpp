#include<bits/stdc++.h>
using namespace std;

// Define the number of runs for the test data
// generated
#define RUN 16

// Define the range of the test data generated
#define MAX 9999

int main()
{
	freopen("find_the_series.txt", "w", stdout);
	// For random values every time
	srand(time(NULL));
	for (int i=1; i<=RUN; i++)
		printf("%d %d\n",1+ rand()%MAX, 1+rand()%MAX);
	fclose(stdout);
	return(0);
}

