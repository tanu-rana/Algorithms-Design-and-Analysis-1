/**
 * Represents a vertex in a graph.
 */

#ifndef VERTEX_HH
#define VERTEX_HH

#include <vector>

using namespace std;

struct Vertex {
    bool        is_visited;
    vector<int> edges;

    Vertex(void);
};

#endif
