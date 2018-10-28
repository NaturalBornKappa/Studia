#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Klasy
class Vertex;
class Edge;

class Graph {
public:
	Graph();
	Graph(int n);

	void add_vertex(Vertex* x = nullptr);
	void add_edge(int n1, int n2);
	void add_edge(Edge* n);

	void set_to();
	void set_from();

	void print_edges();

	int get_vertices_number();
	Vertex* get_vertex(int n);

	int get_edges_number();

	void remove_edge(int n);
	void remove_vertex(int vertex_ideks);

private:
	int vertex_indeks;  //index wiercho³ka
	int vertex_number;  //iloœæ wierzcho³ków

};

class Vertex {
public:
	Vertex();
	Vertex(int n);

	int set_weight(int n);
	int vertex_number;

private:

};

class Edge {
public:
	Edge();
	Edge(Vertex* n1, Vertex* n2);

	void set_from(Vertex* n);
	void set_to(Vertex* n);

private:

};

//Konstruktory
Graph::Graph() {
	this->vertex_number;
}
Graph::Graph(int n) {
	;
}

Vertex::Vertex() {
	;
}

Vertex::Vertex(int n) {
	;
}

Edge::Edge() {
	;
}

Edge::Edge(Vertex* n1, Vertex* n2) {
	;
}


int main()
{

	Graph g(5); //pocz¹tkowa iloœæ wierzcho³ków 
	g.add_vertex();
	Vertex* v = new Vertex(5); //waga wierzcho³ka
	g.add_vertex(v);
	if (g.get_vertices_number() > 3)
	{
		g.get_vertex(0)->set_weight(2); //get_vertex przyjmuje
										//za parametr indeks wierzcho³ka
		g.add_edge(0, 1); //indeksy wierzcho³ków tworz¹cych krawêdŸ
		g.add_edge(0, 3);
		Vertex* v1 = g.get_vertex(1); //indeks wierzcho³ka
		Vertex* v2 = g.get_vertex(2);
		Edge* e = new Edge(v1, v2);
		g.add_edge(e);
		e = new Edge;
		e->set_from(v2);
		e->set_to(v1);
		g.add_edge(e);
	}
	g.print_edges();
	if (g.get_edges_number() > 1)
		g.remove_edge(1); //indeks krawêdzi
	if (g.get_vertices_number() > 1)
		g.remove_vertex(1); //indeks wierzcho³ka


	system("PAUSE");
	return 0;
}