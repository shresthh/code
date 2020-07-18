/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    if(!node)
        return NULL;
    map<UndirectedGraphNode*, UndirectedGraphNode*> map;
    queue<UndirectedGraphNode*> q;
    
    q.push(node);
    UndirectedGraphNode * graph_copy = new UndirectedGraphNode(node->label);
    map[node] = graph_copy;
    while(!q.empty()){
        UndirectedGraphNode *new_node = q.front();
        q.pop();
        int n = new_node->neighbors.size();
        for(int i =0; i < n; i++){
            UndirectedGraphNode *neighbor = new_node->neighbors[i];
            if(map.find(neighbor)==map.end()){
                UndirectedGraphNode *p = new UndirectedGraphNode(neighbor->label);
                map[new_node]->neighbors.push_back(p);
                map[neighbor] = p;
                q.push(neighbor);
            }
            else
                map[new_node]->neighbors.push_back(map[neighbor]);
        }
    }
    return graph_copy;
}
