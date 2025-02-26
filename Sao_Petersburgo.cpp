#include<iostream>
#include<vector>
#include<queue>
using namespace std;

typedef vector<int> vi;
typedef queue<int> qi;

int main()
{  
  int pessoas, ligacoes, k;

  while(cin >> pessoas >> ligacoes >> k)
  {
    vi* lista_adjacencia = new vi[pessoas];

    vi grau;
    grau.assign(pessoas, 0);
        
    // leitura do grafo
    int pessoa1, pessoa2;
    for(int i = 0; i < ligacoes; i++)
    {
      cin >> pessoa1 >> pessoa2;
      pessoa1--;
      pessoa2--;
      lista_adjacencia[pessoa1].push_back(pessoa2);
      lista_adjacencia[pessoa2].push_back(pessoa1);

      grau[pessoa1]++;
      grau[pessoa2]++;
    }

    qi fila;
    for(int i = 0; i < pessoas; i++)
      if(grau[i] < k)
        fila.push(i);

    while(!fila.empty())
    {
      int vertice = fila.front();
      fila.pop();

      for(auto it = lista_adjacencia[vertice].begin(); it != lista_adjacencia[vertice].end(); it++)
        if(--grau[*it] == k-1)
          fila.push(*it);
    }

    bool primeiro = true;
    for(int i = 0; i < pessoas; i++)
      if(grau[i] >= k)
      {
        if(!primeiro)
            cout <<" ";
        
        cout << i+1;
        primeiro = false;
      }

    if(primeiro)
      cout << 0;
    
    cout << endl;
  }

  return 0;
}