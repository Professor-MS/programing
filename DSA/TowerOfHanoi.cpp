#include <iostream> // Including the library for input and output

using namespace std; // Using the standard namespace for convenience

// Recursive function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    // Base case: If there is only one disk, move it directly from source to destination
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl; // Output the move
        return;                                                                 // End the function as there are no more disks to move
    }

    // Step 1: Move n-1 disks from source to auxiliary using destination as a helper
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the nth (largest) disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move the n-1 disks from auxiliary to destination using source as a helper
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

// Main function
int main()
{
    int n; // Variable to store the number of disks

    // Prompt the user for the number of disks
    cout << "Enter the number of disks: ";
    cin >> n; // Input the number of disks

    // Call the Tower of Hanoi function with the initial setup
    // 'A' is the source rod, 'C' is the destination rod, and 'B' is the auxiliary rod
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0; // Indicate successful program execution
}
