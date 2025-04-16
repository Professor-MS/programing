#include <iostream> // Include the input/output library
using namespace std;

// Function to implement Warshall's Algorithm
void warshallAlgorithm(int graph[][100], int n)
{
    // Loop through each intermediate node (k)
    for (int k = 0; k < n; k++)
    {
        // Loop through each source node (i)
        for (int i = 0; i < n; i++)
        {
            // Loop through each destination node (j)
            for (int j = 0; j < n; j++)
            {
                // Update the adjacency matrix
                // If a path exists from i to k and k to j, then a path exists from i to j
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

// Function to display the adjacency matrix
void displayGraph(int graph[][100], int n)
{
    cout << "Transitive Closure of the Graph:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " "; // Print the graph matrix
        }
        cout << endl; // Newline after each row
    }
}

int main()
{
    int n;               // Number of vertices in the graph
    int graph[100][100]; // Adjacency matrix representation of the graph

    // Input the number of vertices
    cout << "Enter the number of vertices: ";
    cin >> n;

    // Input the adjacency matrix
    cout << "Enter the adjacency matrix (0 or 1):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    // Call Warshall's Algorithm to compute the transitive closure
    warshallAlgorithm(graph, n);

    // Display the resulting transitive closure matrix
    displayGraph(graph, n);

    return 0; // Indicate successful program execution
}
