/********************************************
 * Interface of Edge class
 * 
 * @author Vikas Choudhary
 * @date 01.06.2020
 *******************************************/

// Representing an edge in a Graph
class Edge 
{
    int _src_vertex;
    int _dest_vertex;
    double _weight;
public:
    // Constructor
    Edge(int src_vertex, int dest_vertex);
    Edge(int src_vertex, int dest_vertex, double weight);

    // Getters
    int getSource(void) const;
    int getDest(void) const;
    int getWeight(void) const;
};