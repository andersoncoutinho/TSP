using namespace std;

struct Solution{
    vector<int> circuit;
    double cost;
};

struct reOptimization {
    double cost;
    int firstvertex;
    int secondvertex;
};

extern void opt2(reOptimization*bestNeighbour, Solution &solution, double **matrizAdj);
extern void hSwap (reOptimization *bestNeighbour, Solution &solution, double **matrizAdj);
extern void reInsertion(reOptimization *bestNeighbour, Solution &solution, double **matrizAdj);
extern void orOpt2(reOptimization*bestNeighbour, Solution &solution, double **matrizAdj);
extern void orOpt3(reOptimization *bestNeighbour, Solution &solution, double **matrizAdj);
void fillNeighbourhoods(vector<int> &neighbourhoods);

