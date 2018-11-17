#include <iostream>
#include <cstdlib>

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

	void add_vertex(Vertex* x = nullptr) {};
	void add_edge(int n1, int n2) {};
	void add_edge(Edge* n) {};

	void print_edges() {};

	int get_vertices_number() { return 0; };
	Vertex* get_vertex(int n) { return 0; };

	int get_edges_number() { return 0; };

	void remove_edge(int n) {};
	void remove_vertex(int vertex_indeks) {};

private:
	int vertex_indeks;  //index wierzcholka
	int vertex_number;  //ilosc wierzcholkow

};

class Vertex {
public:
	Vertex();
	Vertex(int n);

	int set_weight(int n) { return 0; };
	int vertex_number;

private:

};

class Edge {
public:
	Edge();
	Edge(Vertex* n1, Vertex* n2);

	void set_from(Vertex* n) {};
	void set_to(Vertex* n) {};

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

	Graph g(5); //poczatkowa ilosc wierzcholkow 
	g.add_vertex();
	Vertex* v = new Vertex(5); //waga wierzcholka
	g.add_vertex(v);
	if (g.get_vertices_number() > 3)
	{
		g.get_vertex(0)->set_weight(2); //get_vertex przyjmuje
										//za parametr indeks wierzcholka
		g.add_edge(0, 1); //indeksy wierzcholków tworzacych krawedz
		g.add_edge(0, 3);
		Vertex* v1 = g.get_vertex(1); //indeks wierzcholka
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
		g.remove_edge(1); //indeks krawedzi
	if (g.get_vertices_number() > 1)
		g.remove_vertex(1); //indeks wierzcholka


	system("PAUSE");
	return 0;
}
