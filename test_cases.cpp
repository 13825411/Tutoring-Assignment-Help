#include "test_cases.hpp"

int main(){
    cout << testConstructor_AddVertex_Contains() << endl;
    cout << testGetVertices() << endl;
    cout << testRemoveVertex() << endl;
    cout << testAddEdge_Adjacent_GetNeighbours() << endl;
    cout << test2ndOrderNeighbours() << endl;
    cout << testVertexDegrees() << endl;
    cout << testRemoveEdge() << endl;
}