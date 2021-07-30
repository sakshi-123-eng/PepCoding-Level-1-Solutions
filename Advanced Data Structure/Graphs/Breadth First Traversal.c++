Question:-
https://www.pepcoding.com/resources/online-java-foundation/graphs/bfs-graph-official/ojquestion

Code:-

#include<bits/stdc++.h>
using namespace std;

// my answer
class Edge{
    public:
    int src;
    int nbr;
    int wt;
    
    Edge(int src , int nbr , int wt){
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
    
};

class Pair{
    public:
    int v ; // vertex
    string psf; // path
    
    Pair(int v , string psf){
        this->v = v;
        this->psf = psf;
    }
};

int main(){

      int vtces,edges;
      cin>>vtces>>edges;
      vector<Edge*>graph[vtces];
      for(int i = 0; i < edges; i++){
         int v1,v2,wt;
         cin>>v1>>v2>>wt;
         graph[v1].push_back(new Edge(v1, v2, wt));
         graph[v2].push_back(new Edge(v2, v1, wt));
      }

      int src;
      cin>>src;

      bool visited[vtces];   //={false} 
     for(int i=0;i< vtces;i++){
         visited[i]= false;
     }
     queue<Pair*>q;
     q.push(new Pair(src,to_string(src)+""));
     
     while(q.size()>0){
         Pair* rem = q.front();
         q.pop();
         if(visited[rem->v]==true){
             continue;
         }
         visited[rem->v]= true;
         cout<<rem->v<<"@"<<rem->psf<<"\n";
         
         for(Edge* e : graph[rem->v]){
            if(visited[e->nbr]==false){
                q.push(new Pair(e->nbr , rem->psf + to_string(e->nbr)));
            } 
         }
     }

    
    return 0;
}
