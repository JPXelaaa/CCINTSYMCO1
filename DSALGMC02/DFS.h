#define MAX_ROWS 50
#define MAX_COLS 50
#define MAX_NAME_LEN 50

void DFSRecursion(int v, int visited[], char reference[MAX_ROWS][MAX_COLS],
int graph[MAX_ROWS][MAX_COLS], int numVertices, FILE *fp);

void DFS(char reference[MAX_ROWS][MAX_COLS], int graph[MAX_ROWS][MAX_COLS],
         int numVertices, char *startVertex, FILE *fp);
