#ifndef _SITES_H_
#define _SITES_H_
#include <vector>
#include "Node.h"

using namespace std;

class Sites{
  public:
    Sites();
    /// Constructor by reading from file
    Sites(const string& nodeFile);
    int numNodes();
    vector<pair<double, double>> getPositions();

  private:
    unsigned int m_numNodes;
    vector<Node> m_nodes;
};
#endif
