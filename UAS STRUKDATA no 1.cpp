#include<iostream>
#define Max 100

using namespace std;

int adjMat[Max][Max];

 // instalisasi matriks ke nol
void initializeMat(int v)
{
	for(int i = 0; i < v; i++)
	{ 
	    for(int j = 0; j < v; j++ )
	    { 
	    adjMat[i][j] =0;
		}
	}
}

 // menambahkan edges
void addEdge(int u, int v, int w)
{
	adjMat[u][v] = w;
	adjMat[v][u] = w;
}

// mencetak matriks
void displayMat(int v)
{
    
	for (int i = 1; i <= v; i++)
	{
		cout << "\t";
		
		for (int j = 1; j <= v; j++)
		{
			cout << adjMat[i][j] <<"\t";
		}
		
		cout << endl;
	}
}

int main()
{
	cout<<"Tugas Struktur Data Undirect Graph Zesyca"<<endl<<endl;//memberi nama diatas 
	
	 
	int vertice = 5;
	
	initializeMat(vertice);
	
	addEdge(4,2,6);
	addEdge(8,3,4);
	addEdge(4,1,3);
	addEdge(8,6,4);
	addEdge(2,6,5);
	addEdge(5,3,7);
	
	displayMat(vertice);
	
	
	return 0;
}
